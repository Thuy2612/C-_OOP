#include "HinhTron.h"

HinhTron::HinhTron()
{
	r=0;
}
HinhTron::HinhTron(double r)
{
	this->r=r;
}
double HinhTron::duongKinh()
{
	return (2*r);
}
double HinhTron::dienTich()
{
	return (r*r*3.14);
}
