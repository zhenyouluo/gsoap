#include "calc.h"
#include <assert.h>

int ns2_add(double a,double b,double &result)
{
	return a+b;
}

int ns2_sub(double a,double b,double &result)
{
	return a-b;
}

int ns2_mul(double a,double b,double &result)
{
	return a*b;
}

int ns2_div(double a,double b,double &result)
{
	assert(b != 0.0);
	return a/b;
}

int ns2_pow(double a,double b,double &result)
{
	return result;
}
