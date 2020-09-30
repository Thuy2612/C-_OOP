#include "HinhTron.h"
#include "HH.h"
#include <iostream>
using namespace std;

HinhTron::HinhTron():HH()
{

	r=0;	
}

HinhTron::HinhTron(string name, double r): HH(name)
{

	this->r=r;	
}


double HinhTron::dt()
{
	return(3.14*r*r);
}

double HinhTron::cv()
{
	return (2*3.14*r);
}


