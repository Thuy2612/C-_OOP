#include "SinhVien.h"

SinhVien::SinhVien():Nguoi()
{
	maSv="";
	diemToan=0;
	diemLy=0;
	diemHoa=0;
}

SinhVien::SinhVien(string hoTen, int tuoi, string gioiTinh, string maSv, double diemToan, double diemLy, double diemHoa):Nguoi(hoTen,tuoi,gioiTinh)
{
	this ->maSv=maSv;
	this->diemToan=diemToan;
	this->diemLy=diemLy;
	this->diemHoa=diemHoa;
}

istream& operator >> (istream& in, SinhVien &sv)
{
	Nguoi nguoi;
	cin >> nguoi;
	sv.hoTen=nguoi.hoTen;
	sv.tuoi=nguoi.tuoi;
	sv.gioiTinh=nguoi.gioiTinh;
	
	cout<<"\nNhap vao ma sinh vien:";
	in>>sv.maSv;
	
	cout<<"\nNhap vao diem toan: ";
	in>>sv.diemToan;
	
	cout<<"\nNhap vao diem ly: ";
	in>>sv.diemLy;
	
	cout<<"\nNhap vao diem Hoa: ";
	in>>sv.diemHoa;
	
	return in;
		
}

double SinhVien::diemTb()
{
	return((diemToan+diemLy+diemHoa)/3);
}

void SinhVien::gioiThieu()
{
	Nguoi::gioiThieu();
	cout<<maSv<<"-"<<diemTb()<<endl;

}
