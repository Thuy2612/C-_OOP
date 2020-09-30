#ifndef HTG_H
#define HTG_H
#include "HH.h"
#include <iostream>
using namespace std;
class Htg:public HH

{
	private:
		double a;
		double b;
		double c;
	public:
		Htg();
		Htg(string name, double a, double b, double c);
		double dt();
		double cv();
		bool check();
	protected:
};

#endif
