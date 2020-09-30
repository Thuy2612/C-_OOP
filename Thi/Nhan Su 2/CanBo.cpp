#include "CanBo.h"

CanBo::CanBo():NhanSu2()
{
	maPhongBan="";
	maChucVu="";
}

CanBo::CanBo(string ma, string ten, string maPhongBan, string maChucVu):NhanSu2(ma,ten)
{
	this->maPhongBan=maPhongBan;
	this->maPhongBan=maPhongBan;
}

void CanBo::get()
{
	NhanSu2::get();
	cout<<"Nhap ma phong ban: ";
	fflush(stdin);
	getline(cin,maPhongBan);

	cout<<"Nhap ma chuc vu: ";
	fflush(stdin);
	getline(cin,maChucVu);	
}

void CanBo::put()
{
	NhanSu2::put();	
	cout<<"Ma phong ban: "<<maPhongBan<<endl;
	cout<<"Ma chuc vu; "<<maChucVu<<endl;
}
