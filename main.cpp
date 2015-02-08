/* check list
[x]convert from decimal to ternary (unsigned)
[x]convert from decimal to ternary (singed)// investigate 2s complement (3s complement??)
[x]create hierarchy of trits, tryets, so on 
[x]balanced info
[]signed + - 
[] signed / *
[]build classes for parts of a CPU (register, ALU, FPU, memory, etc)

*/

// cgw: add comments!

#include<iostream>
#include"globalconst.h"
#include"trit.h"
using namespace std; 

int main() { // test program
	
	long long int a;
	char c='y';
	while(c=='y'){
	cout<< "enter value to be converted between +-3812798742493 (27 trits signed)"<<endl;
	cout<<":";
	cin>> a;
	
	Trit test(a);
	test.output();
	cout<<"Run again? Y/n: ";
	cin>> c;
	}
	system("pause");
}
