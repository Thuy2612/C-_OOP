#include "PtBacNhat.h"
#include<iostream>
using namespace std;

PtBacNhat::PtBacNhat(double a_, double b_)
{
	a=a_;
	b=b_;
}


void PtBacNhat::giaipt()
{
	if(a==0)
	{
		if(b==0)
			cout<<"Phuong Trinh bac nhat co vo so nghiem (:";
		else
			cout<<"Phuong trinh bac nhat vo nghiem  (: ";
		}
	else
		cout<<"Phuong trinh bac nhat co 1 nghiem suy nhat: "<<-b/a<<endl;
}
