#ifndef NHANSU2_H
#define NHANSU2_H
#include <iostream>
using namespace std;

class NhanSu2
{
	protected:
		string ma;
		string ten;
	public:
		NhanSu2();
		NhanSu2(string ma, string ten);
		virtual void get()=0;
		virtual void put();
};

#endif
