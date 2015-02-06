/* check list
[x]convert from decimal to ternary (unsigned)
[]convert from decimal to ternary (singed)// investigate 2s complement (3s complement??)
[]create hierarchy of trits, tryets, so on 
[]balanced info
[]signed + - 
[] signed / *
[]investigate hardware options for creation of circuits 

*/

// cgw: add comments!

#include<iostream>
using namespace std; 

int const size=16; // size of your RAM, 16 Trits 

class Trit{
	public:
	Trit(int x){
	int_to_trit(x);
	}
	void output(){
		for (int i=size-1; i>=0; i--){
			cout<< trit_val[i];
		}
		cout<<endl;
	}
	
	private:
	int ipow(int base, int exp){  //googled power function, was having trouble with the cmath library. Needs to be removed 
    int result = 1;
    while (exp){
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
    return result;
}
	int count=size;
	int trit_val[size];  //array to keep final answer of conversion 
	void int_to_trit(int input_val){
		trit_val[count]=input_val/(ipow(3,count));  // value to be converted/ 3^current place (1's, 3's, 9's, 27's, etc) = base three value for that place
		input_val=input_val%(ipow(3,count)); 	// next input value is the remainder of  the previous line
		count--;
		if (count<0){  //if the conversion is finished...
			return;
		}
		else{
			int_to_trit(input_val); // recur into function 
		}
	}
};

int main() { // test program
	
	int a;
	cout<< "enter value to be converted less then 43046721 and greater then 0 (16 trits unsigned)"<<endl;
	cout<<":";
	cin>> a;
	
	Trit test(a);
	test.output();
	system("pause");
}
