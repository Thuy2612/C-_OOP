#include "HinhCau.h"
HinhCau::HinhCau():HinhTron()
{
}
HinhCau::HinhCau(double r):HinhTron(r)
{
}

double HinhCau::theTich()
{
	return (4/3*3.14*r*r*r);
}


