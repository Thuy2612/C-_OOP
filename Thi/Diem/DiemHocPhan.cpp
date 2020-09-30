#include "DiemHocPhan.h"

DiemHocPhan::DiemHocPhan():Diem()
{
	ngayThi="";
	heSo=0;
}

DiemHocPhan::DiemHocPhan(string maSV, string maMonHoc, int diemThi, string ngayThi, int heSo):Diem(maSV, maMonHoc, diemThi)
{
	this->ngayThi=ngayThi;
	this->heSo=heSo;
}

void DiemHocPhan::get()
{
	Diem::get();
	cout<<"Nhap ngay thi: ";
	fflush(stdin);
	getline(cin,ngayThi);
	
	cout<<"Nhap he so: ";
	cin>>heSo;
	
}

void DiemHocPhan::put()
{
	Diem::put();
	cout<<"Ngay thi: "<<ngayThi<<endl;
	cout<<"He So: "<<heSo<<endl;
}
