#include "HinhChuNhat.h"

HinhChuNhat::HinhChuNhat()
{
	a=b=0;
}
HinhChuNhat::HinhChuNhat(double a, double b)
{
	this->a=a;
	this->b=b;
}
double HinhChuNhat::chuVi()
{
	return (a+a+b+b);
}
double HinhChuNhat::dienTich()
{
	return (a*b);
}
