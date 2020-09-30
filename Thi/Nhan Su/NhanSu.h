#ifndef NHANSU_H
#define NHANSU_H
#include <iostream>
using namespace std;

class NhanSu
{
	protected:
		string name;
		int age;
	
	public:
		NhanSu();
		NhanSu(string name, int age);
		virtual void get();
		virtual void put();
	
};

#endif
