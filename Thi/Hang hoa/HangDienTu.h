#ifndef HANGDIENTU_H
#define HANGDIENTU_H

#include "HangHoa.h"

class HangDienTu : public HangHoa
{
	string dacTinh;
	int loai;
	
	public:
		HangDienTu();
		HangDienTu(string maHang, string tenHang, string dacTinh, int loai);
		void get();
		void put();
		
	protected:
};

#endif
