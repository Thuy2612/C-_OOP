#ifndef HINHTRON_H
#define HINHTRON_H

#include "HinhHoc.h"

class HinhTron : public HinhHoc
{
	double r;
	public:
		HinhTron();
		HinhTron(double r);
		double chuVi();
		double dienTich();
	protected:
};

#endif
