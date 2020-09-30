#include "MonHoc.h"

MonHoc::MonHoc()
{
	maMon="";
	tenMon="";
	
}
MonHoc::MonHoc(string maMon, string tenMon)
{
	this->maMon=maMon;
	this->tenMon=tenMon;
}

void MonHoc::get()
{
	cout<<"Nhap ma mon hoc: ";
	fflush(stdin);
	getline(cin,maMon);
	
	cout<<"Nhap ten mon hoc: ";
	fflush(stdin);
	getline(cin,tenMon);	
}

void MonHoc::put()
{
	cout<<"\nMa Mon Hoc: "<<maMon<<endl;
	cout<<"Ten Mon Hoc: "<<tenMon<<endl;
}
