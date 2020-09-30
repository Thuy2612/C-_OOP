#ifndef TAMGIAC_H
#define TAMGIAC_H
#include <iostream>
#include <cmath>
using namespace std;

class TamGiac
{
	double a;
	double b;
	double c;
	
	public:
		TamGiac();
		TamGiac(double a, double b, double c);
		bool check();
		double chuVi();
		double dienTich();
		void dinhDang();
		
	protected:
};

#endif
