
//________________SoPhuc.h_______________

#ifndef SOPHUC_H
#define SOPHUC_H
#include <iostream>

using namespace std;

class SoPhuc
{
	private:
		int a;
		int b;
		
	public:
		SoPhuc();
		SoPhuc(int phanThuc, int phanAo );
		void hienThi();
		
		// nap chong toan tu xuat - nhap
		friend ostream& operator << (ostream& out, SoPhuc sp);
		friend istream& operator >> (istream& in, SoPhuc &sp);
		
		// nap chong toan tu 2 ngoi
		SoPhuc(SoPhuc &sp);
		friend SoPhuc operator +(SoPhuc sp1, SoPhuc sp2);
		friend SoPhuc operator -(SoPhuc sp1, SoPhuc sp2);
		friend SoPhuc operator *(SoPhuc sp1, SoPhuc sp2);
		friend SoPhuc operator *(int k, SoPhuc sp2);
		
		// toan tu mot ngoi ++, --, - ,
		SoPhuc operator ++();
		SoPhuc operator ++(int);
		SoPhuc operator --();
		SoPhuc operator --(int);
		SoPhuc operator -();
		
		// toan tu so sanh > < ==
		float modul(int i, int j);
		
		bool operator > (SoPhuc sp);
		bool operator < (SoPhuc sp);
		bool operator == (SoPhuc sp);
		bool operator >= (SoPhuc sp);
		bool operator <= (SoPhuc sp);
};

#endif
