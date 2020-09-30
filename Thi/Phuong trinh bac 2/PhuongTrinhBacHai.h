#ifndef PHUONGTRINHBACHAI_H
#define PHUONGTRINHBACHAI_H
#include <iostream>
#include <cmath>
using namespace std;

class PhuongTrinhBacHai
{
	double a;
	double b;
	double c;
	
	public:
		PhuongTrinhBacHai();
		PhuongTrinhBacHai(double a, double b, double c);
		friend ostream& operator << (ostream& out, PhuongTrinhBacHai pt);
		friend istream& operator >> (istream& in, PhuongTrinhBacHai &pt);
		double giai();
		
		
	protected:
};

#endif
