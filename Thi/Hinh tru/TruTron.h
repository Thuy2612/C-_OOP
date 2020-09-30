#ifndef TRUTRON_H
#define TRUTRON_H
#include <iostream>
using namespace std;

class TruTron
{
	double r;
	double h;
	public:
		TruTron();
		TruTron(double r, double h);
		double dienTichDay();
		double dienTichXq();
		double theTich();
	protected:
};

#endif
