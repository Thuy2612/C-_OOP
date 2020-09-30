#include "Hcn.h"
#include "HH.h"
#include <iostream>
using namespace std;

Hcn::Hcn():HH()
{
	a=0;
	b=0;
}

Hcn::Hcn(string name, double a, double b):HH(name)
{
	this->a=a;
	this->b=b;
}
double  Hcn::dt()
{
	return (a*b);
}
double Hcn::cv()
{
	return (a+a+b+b);
}
