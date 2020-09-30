#ifndef NGUOI_H
#define NGUOI_H
#include <iostream>
using namespace std;

class Nguoi
{
	public:
		string hoTen;
		int tuoi;
		string gioiTinh;
		
		Nguoi();
		Nguoi(string hoTen, int tuoi, string gioiTinh);
		virtual void gioiThieu();
		
		friend istream& operator >> (istream& in, Nguoi &nguoi);
		
	protected:
};

#endif
