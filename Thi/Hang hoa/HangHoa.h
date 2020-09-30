#ifndef HANGHOA_H
#define HANGHOA_H
#include <iostream>
using namespace std;

class HangHoa
{
	protected:
		string maHang;
		string tenHang;
		
	public:
		HangHoa();
		HangHoa(string maHang, string tenHang);
		virtual void get();
		virtual void put();
		
	
};

#endif
