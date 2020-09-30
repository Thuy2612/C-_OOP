#include "NhanSu.h"

NhanSu::NhanSu()
{
	name="";
	age=0;
}

NhanSu::NhanSu(string name, int age)
{
	this->name=name;
	this->age=age;
}

void NhanSu::get()
{
	cout<<"Nhap ten: ";
	fflush(stdin);
	getline(cin,name);
	
	cout<<"Nhap tuoi: ";
	cin>>age;
	
}

void NhanSu::put()
{
	cout<<"Ho va ten: "<<name<<endl;
	cout<<"Tuoi : "<<age<<endl;
}
