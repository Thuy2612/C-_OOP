#include "Nguoi.h"
#include <string>
#include <iostream>

using namespace std;

Nguoi::Nguoi()
{
	hoTen="";
	tuoi=0;
	gioiTinh="";
}

Nguoi::Nguoi(string hoTen, int tuoi, string gioiTinh)
{
	this->hoTen=hoTen;
	this->tuoi=tuoi;
	this->gioiTinh=gioiTinh;
	/// dung tu khoa this de phan biet tham so truyen vao va du lieu cua class
}

void Nguoi::gioiThieu()
{
	cout<<"\nHo ten: "<<hoTen<<endl;
	cout<<"\nGioi tinh: "<<gioiTinh<<endl;
	cout<<"\nTuoi: "<<tuoi<<endl;
}
