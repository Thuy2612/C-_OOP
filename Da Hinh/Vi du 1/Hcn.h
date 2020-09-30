#ifndef HCN_H
#define HCN_H
#include "HH.h"
#include <iostream>
using namespace std;
class Hcn:public HH

{
	private:
		double a;
		double b;
	public:
		Hcn();
		Hcn( string name, double a, double b);
		double dt();
		double cv();
};

#endif
