#include "TienDien.h"

TienDien::TienDien():HoaDon()
{
	soKW=0;
	loaiKhachHang="";
	giaTien=0;
}

TienDien::TienDien(int soHoaDon, string ngay, string khachHang, double soKW, string loaiKhachHang, double giaTien):HoaDon(soHoaDon,ngay,khachHang)
{
	this->soKW=soKW;
	this->loaiKhachHang=loaiKhachHang;
	this->giaTien=giaTien;
}

ostream& operator << (ostream& out, TienDien td)
{
	return out;
}
istream& operator >> (istream& in, TienDien &td)
{
	HoaDon hd;
	cin>>hd;
	td.soHoaDon=hd.soHoaDon;
	td.ngay=hd.ngay;
	td.khachHang=hd.khachHang;
	cout<<"Nhap so KW ";
	in>>td.soKW;
	cout<<"Nhap loai khach hang ";
	in>>td.loaiKhachHang;
	cout<<"Nhap gia tien ";
	in>>td.giaTien;
	return in;	
}

double TienDien::thanhTien()
{
	if(loaiKhachHang=="ho_gia_dinh") return (soKW*giaTien);
	else if (loaiKhachHang=="doanh_nghiep") return (soKW*giaTien*1.1);
}

void TienDien::show()
{
	HoaDon::show();
	cout<<" So KW "<<soKW<<endl
		<<" Loai khach hang "<<loaiKhachHang<<endl
		<<" Gia tien "<<giaTien<<endl
		<<" Thanh tien "<<thanhTien()<<endl;
}





