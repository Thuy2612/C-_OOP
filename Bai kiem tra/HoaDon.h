#ifndef HOADON_H
#define HOADON_H
#include <iostream>
using namespace std;

class HoaDon
{
	public:
		int soHoaDon;
		string ngay;
		string khachHang;
	
		HoaDon();
		HoaDon(int soHoaDon, string ngay, string khachHang);
		friend ostream& operator << (ostream& out, HoaDon hd);
		friend istream& operator >> (istream& in, HoaDon &hd);
		virtual double thanhTien();
		virtual void show();
	protected:
};

#endif
