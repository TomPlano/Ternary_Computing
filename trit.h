#ifndef TRIT_H
#define TRIT_H
#include"globalconst.h"
class Trit{
	public:
	Trit(long long int x);
	void output_base3();
	void output_tritval();
	void output_result();
	private:
	long long int absol(long long int val);
	long long int ipow(long long int base, long long int exp);\
	void int_to_base3(long long int input_val);
	void base3_to_ballanced3();
	void add(Trit second);
	void reverse();
	long long int count=size;
	int base3[size];  //array to keep final answer of conversion in base 3
	char trit_val[size];  //array to keep final answer of conversion in balanced ternary
	int result[size];  // for storing and outputting results of operations 
};
#endif