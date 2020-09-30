#include "SinhVien.h"
#include <iostream>
using namespace std;

SinhVien::SinhVien():Nguoi()
{
	/*
	hoTen="";
	tuoi=0;
	gioiTinh="";
	*/
	
	maSv="";
	diemToan=0;
	diemLy=0;
	diemHoa=0;
	
}

SinhVien::SinhVien(string hoTen, int tuoi, string gioiTinh, 
				  string maSv, double diemToan, double diemLy, double diemHoa):Nguoi(hoTen,tuoi,gioiTinh)
				  {
				  	
				  	/*
					this->hoTen=hoTen;
				  	this->tuoi=tuoi;
				  	this->gioiTinh=gioiTinh;
					*/
				  	
				  	
				  	this->maSv=maSv;
				  	this->diemToan=diemToan;
				  	this->diemLy=diemLy;
				  	this->diemHoa=diemHoa;
				  	
				  }

double SinhVien::trungBinh()
{
	return((diemToan+diemLy+diemHoa)/3);
	
	
}

void SinhVien::gioiThieu()
{
	/*
	cout<<"\n\nHo Ten: "<<hoTen<<endl;
	cout<<"\nTuoi : "<<tuoi<<endl;
	cout<<"\nGioi tinh: "<<gioiTinh<<endl;
	*/
	
	Nguoi::gioiThieu();
	cout<<"\nMa Sinh Vien: "<<maSv<<endl;
	cout<<"\nDiem trung binh; "<<trungBinh()<<endl;
}
