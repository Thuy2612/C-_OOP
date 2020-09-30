#ifndef HINHCHUNHAT_H
#define HINHCHUNHAT_H

#include "HinhHoc.h"


class HinhChuNhat : public HinhHoc
{
	double a;
	double b;
	
	public:
		HinhChuNhat();
		HinhChuNhat(double a, double b);
		double chuVi();
		double dienTich();
	protected:
};

#endif
