#include "TruTron.h"

TruTron::TruTron()
{
	r=0;
	h=0;
}
TruTron::TruTron(double r, double h)
{
	this->r=r;
	this->h=h;
}

double TruTron::dienTichDay()
{
	return (r*r*3.14);
}

double TruTron::dienTichXq()
{
	return (h*(2*r*3.14));
}

double TruTron::theTich()
{
	return (h*r*r*3.14);
}
