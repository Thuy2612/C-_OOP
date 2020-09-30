#ifndef GIAOVIEN_H
#define GIAOVIEN_H

#include "Nhansu.h"

class GiaoVien : public NhanSu
{
	string chuyenNganh;
	public:
		GiaoVien();
		GiaoVien(string name, int age, string chuyenNganh);
		void get();
		void put();
		
	protected:
};

#endif
