#include "NhanVien.h"

NhanVien::NhanVien():Nguoi()
{
	maNv="";
	soNgay=0;
	luongCB=0;
}

NhanVien::NhanVien(string hoTen, int tuoi, string gioiTinh, string maNv, int soNgay, int luongCB):Nguoi(hoTen,tuoi,gioiTinh)
{
	this->maNv=maNv;
	this->soNgay=soNgay;
	this->luongCB;
}

istream& operator >> (istream& in, NhanVien &nv)
{
	Nguoi nguoi;
	cin >> nguoi;
	nv.hoTen=nguoi.hoTen;
	nv.tuoi=nguoi.tuoi;
	nv.gioiTinh=nguoi.gioiTinh;
	
	cout<<"\nNhap vao ma nhan vien:";
	in>>nv.maNv;
	
	cout<<"\nNhap vao so ngay luong: ";
	in>>nv.soNgay;
	
	cout<<"\nNhap vao luong co ban: ";
	in>>nv.luongCB;
	
	return in;
}

double NhanVien::luong()
{
	return(soNgay*luongCB);
}

void NhanVien::gioiThieu()
{
	Nguoi::gioiThieu();
	cout<<maNv<<"-"<<luong()<<endl;

}



