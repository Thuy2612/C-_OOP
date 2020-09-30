#include "TamGiac.h"

TamGiac::TamGiac()
{
	a=0;
	b=0;
	c=0;
}

TamGiac::TamGiac(double a, double b , double c)
{
	this->a=a;
	this->b=b;
	this->c=c;
}

bool TamGiac::check()
{
	if (a+b>c&&a+c>b&&b+c>a)
		return true;
	return false;
	
}

double TamGiac::chuVi()
{
	if (check()==false)
		cout<<"Khong phai tam giac"<<endl;
	else
		return (a+b+c);
}

double TamGiac::dienTich()
{
	double p;
	double s;
	p=chuVi()/2;
	s=p*(p-a)*(p-b)*(p-c);
	s=sqrt(s);
	return s;
}

void TamGiac::dinhDang()
{
	if(check()==true)
	{
		if(a==b==c)
			cout<<"Tam Giac la tam giac deu"<<endl;
		else if(a==b||a==c||b==c)
			cout<<"Tam Giac la tam giac can"<<endl;
		else if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			cout<<"Tam Giac la tam giac vuong"<<endl;
		else
			cout<<"Tam Giac la tam giac thuong"<<endl;
	}
	else 
		cout<<"Khong phai tam giac";
}
