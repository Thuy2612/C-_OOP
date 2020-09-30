#include "TienNuoc.h"

TienNuoc::TienNuoc():HoaDon()
{
	soM3=0;
	giaTienM3=0;
}

TienNuoc::TienNuoc(int soHoaDon, string ngay, string khachHang, double soM3, double giaTienM3):HoaDon(soHoaDon,ngay,khachHang)
{
	this->soM3=soM3;
	this->giaTienM3=giaTienM3;
}

ostream& operator << (ostream& out, TienNuoc tn)
{
	return out;
}
istream& operator >> (istream& in, TienNuoc &tn)
{
	HoaDon hd;
	cin>>hd;
	tn.soHoaDon=hd.soHoaDon;
	tn.ngay=hd.ngay;
	tn.khachHang=hd.khachHang;
	cout<<"Nhap so M3:";
	in>>tn.soM3;
	cout<<"Nhap gia tien 1 M3: ";
	in>>tn.giaTienM3;
	return in;	
}

double TienNuoc::thanhTien()
{
	return (soM3*giaTienM3);
}

void TienNuoc::show()
{
	HoaDon::show();
	cout<<" So M3 "<<soM3
		<<endl<<" Gia tien 1M3 "<<giaTienM3
		<<endl<<" Thanh tien "<<thanhTien()<<endl;
}





