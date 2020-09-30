#ifndef TIENDIEN_H
#define TIENDIEN_H

#include "HoaDon.h"

class TienDien : public HoaDon
{
	double soKW;
	string loaiKhachHang;
	double giaTien;
	
	public:
		TienDien();
		TienDien(int soHoaDon, string ngay, string khachHang, double soKW, string loaiKhachHang, double giaTien);
		friend ostream& operator << (ostream& out, TienDien td);
		friend istream& operator >> (istream& in, TienDien &td);
		double thanhTien();
		void show();
		
	protected:
};

#endif
