#include "PtBacHai.h"
#include<iostream>
#include<cmath>
using namespace std;

PtBacHai::PtBacHai(double a_, double b_, double c_)
{
	a=a_;
	b=b_;
	c=c_;
}

void PtBacHai::giaipt()
{
	double delta;
	delta=b*b-4*a*c;
	if( delta<0)
		cout<<"Phuong trinh bac hai vo nghiem (:";
	else if (delta ==0)
		cout<<"Phuong trinh bac hai co nghiem kep x="<<-b/(2*a)<<endl;
	else
		cout <<"Phuong trinh bac hai co 2 nghiem phan biet x1="<<(-b+sqrt(delta))/(2*a)<<" va x2="<<(-b-sqrt(delta))/(2*a);
}
