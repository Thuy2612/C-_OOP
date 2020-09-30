#ifndef MONHOC_H
#define MONHOC_H
#include <iostream>
using namespace std;


class MonHoc
{
	protected:
		string maMon;
		string tenMon;
		
	public:
		MonHoc();
		MonHoc(string maMon, string tenMon);
		virtual void get();
		virtual void put();
		

};

#endif
