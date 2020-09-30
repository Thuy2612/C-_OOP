#ifndef HH_H
#define HH_H
#include <iostream>
using namespace std;


class HH
{
	public:
		string name;
		HH();  // phung thuc khoi tao khong co tham so
		HH(string name); // phuong thuc khoi tao co tham so
		void show();
		virtual double dt(); // xay dung tinh da hinh
		virtual double cv();
		
		string getName();
		void setName(string n);
	protected:
		
	
};

#endif
