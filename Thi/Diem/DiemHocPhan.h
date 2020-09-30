#ifndef DIEMHOCPHAN_H
#define DIEMHOCPHAN_H

#include "Diem.h"

class DiemHocPhan : public Diem
{
	string ngayThi;
	int heSo;
	
	public:
		DiemHocPhan();
		DiemHocPhan(string maSV, string maMonHoc, int diemThi, string ngayThi, int heSo);
		void get();
		void put();
	protected:
};

#endif
