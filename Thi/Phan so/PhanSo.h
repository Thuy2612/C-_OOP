#ifndef PHANSO_H
#define PHANSO_H
#include <iostream>
using namespace std;

class PhanSo
{
	public:
		double ts;
		double ms;
		PhanSo();
		PhanSo(double ts, double ms);
		friend ostream& operator <<(ostream& out, PhanSo ps);
		friend istream& operator >>(istream& in, PhanSo &ps);
		int ucln(int a, int b);
		PhanSo rutGon();
		
		friend PhanSo operator +( PhanSo ps1, PhanSo ps2);
		friend PhanSo operator -( PhanSo ps1, PhanSo ps2);
		friend PhanSo operator +( PhanSo ps, int x);
		
	protected:
};

#endif
