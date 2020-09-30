#include "HangHoa.h"

HangHoa::HangHoa()
{
	maHang="";
	tenHang="";
}

HangHoa::HangHoa(string maHang, string tenHang){
	this->maHang=maHang;
	this->tenHang=tenHang;
	
}

void HangHoa::get()
{
	cout<<"Nhap ma hang: ";
	getline(cin,maHang);
	cout<<"Nhap ten hang: ";
	getline(cin,tenHang);
	
}

void HangHoa::put()
{
	cout<<"Ma hang hoa: "<<maHang<<endl;
	cout<<"Ten hang hoa: "<<tenHang<<endl;
}
