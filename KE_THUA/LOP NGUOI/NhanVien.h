#ifndef NHANVIEN_H
#define NHANVIEN_H
#include  <iostream>
#include   "Nguoi.h"
using namespace std;

class NhanVien:public Nguoi
{
	private:
		string maNhanVien;
		double heSoLuong;	
	public:
		NhanVien();
		NhanVien(string hoTen, int tuoi, string gioiTinh, string maNhanVien, double heSoLuong);
		
		void gioiThieu();
		double luong();
		
	protected:
};

#endif
