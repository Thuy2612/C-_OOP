#ifndef SINHVIEN_H
#define SINHVIEN_H

#include "Nguoi.h"

class SinhVien : public Nguoi
{
		string maSv;
		double diemToan;
		double diemLy;
		double diemHoa;
	public:
		SinhVien();
		SinhVien(string hoTen, int tuoi, string gioiTinh, string maSv, double diemToan, double diemLy, double diemHoa);
		
		void gioiThieu();
		double diemTb();
		
		friend istream& operator >> (istream& in, SinhVien &sv);
		
	protected:
};

#endif
