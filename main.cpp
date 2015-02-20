/* check list
[x]convert from decimal to ternary (unsigned)
[x]convert from decimal to ternary (singed)// investigate 2s complement (3s complement??)
[x]create hierarchy of trits, tryets, so on 
[x]balanced info
[x]signed + - 
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
	long long int b;
	char c='y';
	while(c=='y'){
	cout<< "enter values to be added between +-3812798742493 (27 trits signed)"<<endl;
	cout<<"1:";
	cin>> a;
	cout<<"2:";
	cin>> b;
	
	
	Trit first(a);
	
	Trit second (b);
	

	cout<<"input 1: ";
	first.output_tritval();
	cout<<"input 2: ";
	second.output_tritval();
	first.add_subtract(second);
	cout<<"result : ";
	first.output_result();
	
	cout<<"Run again? Y/n: ";
	cin>> c;
	}
#ifdef _WIN32
	system("pause");
#endif
}
