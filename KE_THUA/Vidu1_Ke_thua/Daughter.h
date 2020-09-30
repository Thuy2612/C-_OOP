#ifndef DAUGHTER_H
#define DAUGHTER_H
#include "Mother.h"

#include <iostream>
using namespace std;

class Daughter:public Mother
{
	private:
		int tuoi;
	public:
		Daughter();
		Daughter(string ten_, int tuoi_);
		void gioiThieu(); // khai bao de
	protected:
};

#endif
