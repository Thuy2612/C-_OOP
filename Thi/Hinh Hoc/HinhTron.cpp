#include "HinhTron.h"
HinhTron::HinhTron()
{
	r=0;
}
HinhTron::HinhTron(double r)
{
	this->r=r;
}
double HinhTron::chuVi()
{
	return (2*r*3.14);
	
}
double HinhTron::dienTich()
{
	return (r*r*3.14);
}

