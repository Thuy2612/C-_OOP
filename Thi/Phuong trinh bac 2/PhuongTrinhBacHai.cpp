#include "PhuongTrinhBacHai.h"

PhuongTrinhBacHai::PhuongTrinhBacHai()
{
	a=b=c=0;
}

PhuongTrinhBacHai::PhuongTrinhBacHai(double a, double b, double c)
{
	this->a=a;
	this->b=b;
	this->c=c;
}

ostream& operator << (ostream& out, PhuongTrinhBacHai pt)
{
	out<<pt.a<<"x^2 + "<<pt.b<<"x + "<<pt.c<<endl;
}

istream& operator >> (istream& in, PhuongTrinhBacHai &pt)
{
	cout<<" Nhap a=";
	in>>pt.a;
	cout<<" Nhap b=";
	in>>pt.b;
	cout<<" Nhap c=";
	in>>pt.c;
}

double PhuongTrinhBacHai::giai()
{
	double delta=b*b-4*a*c;
	if(delta<0)
		cout<<"Phuong trinh vo nghiem (:"<<endl;
	else if(delta==0)
		cout<<"Phuong trinh co nghiem kep : x="<<(-1)*b/(2*a)<<endl;
	else
		cout<<"Phuong trinh co hai nghiem:"<<endl<<"x1="<<((-1)*b+sqrt(delta))/(2*a)<<endl<<"x2="<<((-1)*b-sqrt(delta))/(2*a)<<endl;
	
}
