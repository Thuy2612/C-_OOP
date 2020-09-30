#ifndef MONCHUYENNGANH_H
#define MONCHUYENNGANH_H

#include "MonHoc.h"

class MonChuyenNganh : public MonHoc
{
	string maChuyenNganh;
	int soDvht;
	public:
		MonChuyenNganh();
		MonChuyenNganh(string maMon, string tenMon, string maChuyenNganh, int soDvht);
		void get();
		void put();
	protected:
};

#endif
