#ifndef DIEM_H
#define DIEM_H
#include <iostream>
using namespace std;

class Diem
{

	protected:
		string maSV;
		string maMonHoc;
		int diemThi;
	public:
		Diem();
		Diem(string maSV, string maMonHoc, int diemThi);
		virtual void get();
		virtual void put();
		
};

#endif
