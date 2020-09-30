#include "Htg.h"
#include "HH.h"
#include<cmath>
Htg::Htg():HH()
{
	a=b=c=0;
}
Htg::Htg(string name, double a, double b, double c):HH(name)
{
	this->a=a;
	this->b=b;
	this->c=c;
}

bool Htg::check()
{
	if(a+b>c&&a+c>b&&b+c>a)
		return true;
	return false ;
	
}
double Htg:: cv()
{
	if (check()==true)
		return(a+b+c);
	return 0;
}

double Htg::dt()
{
	double p=cv()/2;
	double s=p*(p-a)*(p-b)*(p-c);
	return sqrt(s);
}

