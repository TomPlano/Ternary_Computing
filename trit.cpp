#include"trit.h"
#include"globalconst.h"
#include <iostream>
using namespace std;
Trit::Trit(long long int x){
		if (x<0){
			x=ipow(3,size)-absol(x);// converts requested value into its mapped positive value
			int_to_base3(x);
		}
		else{
			int_to_base3(x);
		}
	}
void Trit::output_base3 (){// pretty formatting......highly irrelevant
	for (int i=0; i<size; i++){
		cout<< base3[i];
	}
		cout<<endl;
		return;
}
void Trit::output_tritval(){
	for (int i=0; i<size; i++){
		cout<< trit_val[i];
	}
		cout<<endl;
		return;
}
void Trit::output_result(){
	for (int i=0; i<size; i++){
		cout<< result[i];
	}
		cout<<endl;
		return;
}

long long int Trit::absol (long long int val){ // down and dirty abs function 
		val=-val;
		return val;
	}
long long int Trit::ipow(long long int base, long long int exp){  //googled power function, was having trouble with the cmath library. Needs to be removed 
	long long int result = 1;
    while (exp){
        if (exp & 1)
            result *= base;
        exp >>= 1;
        base *= base;
    }
    return result;
}

 void Trit::int_to_base3(long long int input_val){
		base3[count]=input_val/(ipow(3,count));  // value to be converted/ 3^current place (1's, 3's, 9's, 27's, etc) = base three value for that place
		input_val=input_val%(ipow(3,count)); 	// next input value is the remainder of  the previous line
		count--;
		if (count<0){  //if the conversion is finished...
			reverse();
			base3_to_ballanced3();
			return;
		}
		else{
			int_to_base3(input_val); // recur into function 
		}
		return;
	}
void Trit::base3_to_ballanced3(){
		for(int i=0; i<size; i++){
			if (base3[i]==2){
				trit_val[i]='+';
			}
			else if (base3[i]==1){
				trit_val[i]='-';
			}
			else{
				trit_val[i]='0';
			}	
		}
		return;
	}
void Trit::add(Trit second){
	
	
	
	
}
void Trit::reverse(){
	int temp[size];
	for(int i=0;i<size;i++){
		temp[(size-1)-i]=base3[i];
	}
	for(int i=0;i<size;i++){
		base3[i]=temp[i];
	}
}

