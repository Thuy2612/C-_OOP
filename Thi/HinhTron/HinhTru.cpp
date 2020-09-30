#include "HinhTru.h"
HinhTru::HinhTru():HinhTron()
{
	h=0;
}
HinhTru::HinhTru(double r, double h):HinhTron(r)
{
	this->h=h;
}
double HinhTru::chuViDay()
{
	return(2*r*3.14);
}
double HinhTru::dienTichDay()
{
	return (HinhTron::dienTich());
}
double HinhTru::dienTichXq()
{
	double cv=HinhTru::chuViDay();
	return (h*cv);
}
double HinhTru::dienTichTp()
{
	double day=HinhTru::dienTichDay();
	double xq=HinhTru::dienTichXq();
	return (day+xq);
}
double HinhTru::theTich()
{
	double day=HinhTru::dienTichDay();
	return(h*day);
}

