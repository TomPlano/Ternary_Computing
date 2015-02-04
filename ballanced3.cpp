/* check list
[x]convert from decimal to ternary (unsigned)
[]convert from decimal to ternary (singed)// investigate 2s complement (3s complement??)
[]create hierarchy of trits, tryets, so on 
[]balanced info
[]signed + - 
[] signed / *
[]investigate hardware options for creation of circuits 

*/
#include<iostream>
using namespace std; 

int const size=16;

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
	int ipow(int base, int exp){
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
	int trit_val[size];
	void int_to_trit(int input_val){
		trit_val[count]=input_val/(ipow(3,count));
		input_val=input_val%(ipow(3,count));
		count--;
		if (count<0){
			return;
		}
		else{
			int_to_trit(input_val);
		}
	}
};

int main() {
	
	int a;
	cout<< "enter value to be converted less then 43046721 and greater then 0 (16 trits unsigned)"<<endl;
	cout<<":";
	cin>> a;
	
	Trit test(a);
	test.output();
	system("pause");
}