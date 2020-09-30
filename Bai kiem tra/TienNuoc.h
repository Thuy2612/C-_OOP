#ifndef TIENNUOC_H
#define TIENNUOC_H

#include "HoaDon.h"

class TienNuoc : public HoaDon
{
		double soM3;
		double giaTienM3;
		
	public:
		
		TienNuoc();
		TienNuoc(int soHoaDon, string ngay, string khachHang, double soM3, double giaTienM3);
		friend ostream& operator << (ostream& out, TienNuoc tn);
		friend istream& operator >> (istream& in, TienNuoc &tn);
		virtual double thanhTien();
		void show();
		
	protected:
};

#endif
