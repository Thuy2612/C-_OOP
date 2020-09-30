#ifndef KHACHHANG_H
#define KHACHHANG_H

#include "Nguoi.h"

class KhachHang : public Nguoi
{
	int soLuongHang;
	int gia;
	
	public:
		KhachHang();
		KhachHang(string hoTen, int tuoi, string gioiTinh, int soLuongHang, int gia);
		friend istream& operator >> (istream& in, KhachHang &kh);
		void gioiThieu();
		double giaTri();
		
	protected:
};

#endif
