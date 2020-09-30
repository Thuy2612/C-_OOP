#include "HangDienTu.h"

HangDienTu::HangDienTu(): HangHoa()
{
	dacTinh="";
	loai=0;
}
HangDienTu::HangDienTu(string maHang, string tenHang, string dacTinh, int loai):HangHoa(maHang,tenHang)
{
	this->dacTinh=dacTinh;
	this->loai=loai;
}
void HangDienTu::get()
{
	HangHoa::get();
	cout<<"Nhap dac tinh: ";
	getline(cin,dacTinh);
	
	cout<<"\nNhap loai hang dien tu: ";
	cin>>loai;
}

void HangDienTu::put()
{
	HangHoa::put();
	cout<<"\nDac tinh hang dien tu: "<<dacTinh<<endl;
	cout<<"\nLoai hang dien tu: "<<loai<<endl;
}
