#ifndef TRIT_H
#define TRIT_H
#include"globalconst.h"
class Trit{
	public:
	Trit(long long int x);
	void output_base3();
	void output_tritval();
	void output_result();
	
	void add_subtract(Trit second);
	
	//look up operator overloading
	//look up tables
	// maps
	Trit operator+(Trit & a, Trit & b);
	
	
	private:
	long long int absol(long long int val);
	long long int ipow(long long int base, long long int exp);\
	void int_to_base3(long long int input_val);
	void base3_to_ballanced3();
	long long int count=size;
	int base3[size];  //array to keep final answer of conversion in base 3
	char trit_val[size];  //array to keep final answer of conversion in balanced ternary
	char result[size];  // for storing and outputting results of operations 
};
#endif