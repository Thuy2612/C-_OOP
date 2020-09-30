#include "Diem.h"

Diem::Diem()
{
	maSV="";
	maMonHoc="";
	diemThi=0;
	
}
Diem::Diem(string maSV, string maMonHoc, int diemThi)
{
	this->maSV=maSV;
	this->maMonHoc=maMonHoc;
	this->diemThi=diemThi;
	
}

void Diem::get(){
	cout<<"Nhap ma sinh vien: ";
	fflush(stdin);
	getline(cin,maSV);
	
	cout<<"Nhap ma mon hoc: ";
	fflush(stdin);
	getline(cin,maMonHoc);	
	
	cout<<"Diem thi: ";
	fflush(stdin);
	cin>>diemThi;
}

void Diem::put()
{
	cout<<"\nMa Sinh Vien: "<<maSV<<endl;
	cout<<"Ma mon hoc: "<<maMonHoc<<endl;
	cout<<"Diem thi: "<<diemThi<<endl;
}
