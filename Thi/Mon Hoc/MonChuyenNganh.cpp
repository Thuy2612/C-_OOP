#include "MonChuyenNganh.h"

MonChuyenNganh::MonChuyenNganh():MonHoc()
{
	maChuyenNganh="";
	soDvht=0;
}
MonChuyenNganh::MonChuyenNganh(string maMon, string tenMon, string maChuyenNganh, int soDvht):MonHoc(maMon, tenMon)
{
	this->maChuyenNganh=maChuyenNganh;
	this->soDvht=soDvht;
}
void MonChuyenNganh::get()
{
	MonHoc::get();
	cout<<"Nhap ma chuyen nganh: ";
	fflush(stdin);
	getline(cin,maChuyenNganh);
	
	cout<<"Nhap so DVHT: ";
	cin>>soDvht;
}

void MonChuyenNganh::put()
{
	MonHoc::put();
	cout<<"Ma chuyen nganh: "<<maChuyenNganh<<endl;
	cout<<"So DVHT: "<<soDvht<<endl;
}
