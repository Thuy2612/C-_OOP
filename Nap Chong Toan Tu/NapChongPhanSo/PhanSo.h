#ifndef PHANSO_H
#define PHANSO_H

#include<iostream>

using namespace std;

class PhanSo
{
	private:
		int tuSo;
		int mauSo;
	public:
		PhanSo(); // phuong thuc khoi tao khong co tham so
		PhanSo(int ts, int ms); // phuong thuc khoi tao co tham so
		PhanSo(PhanSo& ps);
		// xay dung phuong thuc show ra phan so
		void hienThi();
		int ucln(int a, int b);
		PhanSo rutGon();
		
		// nap chong voi ham thanh vien cua lop, co phan so ngam dinh o ben trong
		PhanSo operator +(PhanSo ps);
		
		PhanSo operator -(PhanSo ps);
		
		/*PhanSo operator *(PhanSo ps);*/
		// nap chong voi ham ban, khong co phan so ngam dinh o ben trong, nhung van nhin thay ts, ms
		
		friend PhanSo operator *(PhanSo ps1, PhanSo ps2);
		
		//bool operator > (PhanSo ps);
		friend bool operator > (PhanSo ps1, PhanSo ps2);
		bool operator >= (PhanSo ps);
		bool operator ==(PhanSo ps);
		
		PhanSo operator ++();
		PhanSo operator ++(int);
		//PhanSo operator -();
		
		friend PhanSo operator-(PhanSo ps);
		
		friend ostream& operator << (ostream& out,PhanSo ps); /// lay phan so de in ra
		friend istream& operator >> (istream& input, PhanSo &ps); // lay du lieu o luong vao de thay vao ps
		
	protected:
};

#endif
