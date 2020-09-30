#include "NhanVien.h"
#include <iostream>
#include"NhanVien.h"

using namespace std;

NhanVien::NhanVien():Nguoi()
{
	maNhanVien="";
	heSoLuong=0;
}

NhanVien::NhanVien(string hoTen, int tuoi, string gioiTinh, string maNhanVien, double heSoLuong): Nguoi(hoTen,tuoi, gioiTinh)


{
	this-> maNhanVien=maNhanVien;
	this->heSoLuong=heSoLuong;
	
}

double NhanVien::luong()
{
	return heSoLuong*1490;
}

void NhanVien::gioiThieu()
{
	Nguoi::gioiThieu();
	cout<<"\nMa Nhan Vien: "<<maNhanVien<<endl;
	cout<<"\nHe So Luong: "<<heSoLuong<<endl;
	cout<<"\nLuong: "<<luong()<<endl;
}
