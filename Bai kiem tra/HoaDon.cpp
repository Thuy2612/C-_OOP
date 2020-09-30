#include "HoaDon.h"
HoaDon::HoaDon()
{
	soHoaDon=0;
	ngay="";
	khachHang="";
}

HoaDon::HoaDon(int soHoaDon, string ngay, string khachHang)
{
	this->soHoaDon=soHoaDon;
	this->ngay=ngay;
	this->khachHang=khachHang;
}

ostream& operator << (ostream& out, HoaDon hd)
{
	return out;
}

istream& operator >> (istream& in, HoaDon &hd)
{
	cout <<"Nhap vao so hoa don: ";
	in >> hd.soHoaDon;
	cout <<"Nhap vao ngay ra hoa don: ";
	in >> hd.ngay;
	cout<<"Nhap vao ten khach hang: ";
	in>> hd.khachHang;
	return in;
}
double HoaDon::thanhTien()
{
	return 0;
}
void HoaDon::show()
{
	cout<<"Hoa don so "<<soHoaDon<<endl<<" Ngay "<<ngay<<endl<<" Khach hang "<<khachHang<<endl;
}
