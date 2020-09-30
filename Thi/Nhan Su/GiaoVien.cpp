#include "GiaoVien.h"

GiaoVien::GiaoVien():NhanSu()
{
	chuyenNganh="";
}

GiaoVien::GiaoVien(string name, int age, string chuyenNganh):NhanSu(name, age)
{
	this->chuyenNganh=chuyenNganh;
}

void GiaoVien::get()
{
	NhanSu::get();
	cout<<"Nhap chuyen nganh: ";
	fflush(stdin);
	getline(cin, chuyenNganh);
}

void GiaoVien::put()
{
	NhanSu::put();
	cout<<"Chuyen nganh: "<<chuyenNganh<<endl;
}
