#ifndef HINHTRON_H
#define HINHTRON_H
#include "HH.h"
#include <iostream>
using namespace std;

class HinhTron: public HH
{
	public:
	 
		double r;
		HinhTron();
		HinhTron(string name, double r);
		
		//void show();
		
		double dt();
		double cv();
};

#endif
