#include "Nguoi.h"

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
}

istream& operator >> (istream& in, Nguoi &nguoi)
{
 	cout<<"\nNhap vao ho ten:";
 	in>>nguoi.hoTen;
 	
 	cout<<"\nNhap vao tuoi: ";
 	in>>nguoi.tuoi;
 	
 	cout<<"\nNhap vao gioi tinh: ";
 	in>>nguoi.gioiTinh;
 	
 	return in;
		
}

void Nguoi::gioiThieu()
{
	cout<<hoTen<<"-"<<tuoi<<"-"<<gioiTinh<<"-";
}
