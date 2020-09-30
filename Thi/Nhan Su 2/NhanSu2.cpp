#include "NhanSu2.h"

NhanSu2::NhanSu2()
{
	ma="";
	ten="";
}

NhanSu2::NhanSu2(string ma, string ten)
{
	this->ma=ma;
	this->ten=ten;	
}

void NhanSu2::get()
{
	cout<<"Nhap ma: ";
	fflush(stdin);
	getline(cin,ma);
	
	cout<<"Nhap ten: ";
	fflush(stdin);
	getline(cin,ten);
}

void NhanSu2::put()
{
	cout<<"\nMa: "<<ma<<endl;
	cout<<"Ten: "<<ten<<endl;
}

