#ifndef TRIT_H
#define TRIT_H
#include"globalconst.h"
class Trit{
	public:
	Trit(long long int x);
	void output();
	
	private:
	long long int absol(long long int val);
	long long int ipow(long long int base, long long int exp);

	//relevant stuff below
	long long int count=size;
	int base3[size];  //array to keep final answer of conversion in base 3
	void int_to_base3(long long int input_val);
	char trit_val[size];  //array to keep final answer of conversion in balanced ternary
	void base3_to_ballanced3();
};
#endif