#ifndef CANBO_H
#define CANBO_H

#include "NhanSu2.h"

class CanBo : public NhanSu2
{
	string maPhongBan;
	string maChucVu;
	public:
		CanBo();
		CanBo(string ma, string ten, string maPhongBan, string maChucVu);
		void get();
		void put();
		
	protected:
};

#endif
