#ifndef HINHTRU_H
#define HINHTRU_H

#include "HinhTron.h"

class HinhTru : public HinhTron
{
	double h;
	public:
		HinhTru();
		HinhTru(double r, double h);
		double chuViDay();
		double dienTichDay();
		double dienTichXq();
		double dienTichTp();
		double theTich();
		
	protected:
};

#endif
