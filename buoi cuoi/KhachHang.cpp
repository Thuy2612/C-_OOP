#include "KhachHang.h"

KhachHang::KhachHang():Nguoi()
{
	soLuongHang=0;
	gia=0;
}

KhachHang::KhachHang(string hoTen, int tuoi, string gioiTinh, int soLuongHang, int gia):Nguoi(hoTen,tuoi,gioiTinh)
{
	this->soLuongHang=soLuongHang;
	this->gia=gia;
}

istream& operator >> (istream& in, KhachHang &kh)
{
	Nguoi nguoi;
	cin >> nguoi;
	kh.hoTen=nguoi.hoTen;
	kh.tuoi=nguoi.tuoi;
	kh.gioiTinh=nguoi.gioiTinh;
	
	cout<<"\nNhap so luong hang:";
	in>>kh.soLuongHang;
	
	cout<<"\nNhap vao gia: ";
	in>>kh.gia;
	
	return in;
		
}

double KhachHang::giaTri()
{
	return(gia*soLuongHang);
}

void KhachHang::gioiThieu()
{
	Nguoi::gioiThieu();
	cout<<soLuongHang<<"-"<<giaTri()<<endl;

}

