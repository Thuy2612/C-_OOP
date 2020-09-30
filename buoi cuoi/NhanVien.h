#ifndef NHANVIEN_H
#define NHANVIEN_H

#include "Nguoi.h"

class NhanVien : public Nguoi
{
	string maNv;
	int soNgay;
	int luongCB;
	
	public:
		NhanVien();
		NhanVien(string hoTen, int tuoi, string gioiTinh, string maNv, int soNgay, int luongCB);
		friend istream& operator >> (istream& in, NhanVien &nv);
		double luong();
		void gioiThieu();
		
	protected:
};

#endif
