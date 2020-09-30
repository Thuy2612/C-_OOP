#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <iostream>
#include"Nguoi.h"
using namespace std;

class SinhVien:public Nguoi
{
	private:
		string maSv;
		double diemToan;
		double diemLy;
		double diemHoa;
		
	public:
		SinhVien();
		SinhVien(string hoTen, int tuoi, string gioiTinh, 
				  string maSv, double diemToan, double diemLy, double diemHoa);
				  
		double  trungBinh();
		
		/*ghi de phuong thuc gioi thieu, neu khong dung ghi de thi khi
		 goi phuong thuc gioiThieu thi ham main se goi den
		 phuong thu gioiThieu cua class nguoi voi 3 thuoc tinh*/ 
		
		void gioiThieu();
		
	protected:
};

#endif
