#include <iostream>
#include "HinhHoc.h"
#include "HinhChuNhat.h"
#include "HinhTron.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	HinhHoc h;
	HinhHoc *h1;
	HinhHoc *h2;
	HinhChuNhat hcn(2,3);
	HinhTron ht(2);
	h1=&hcn;
	h2=&ht;
	cout<<"Chu vi hinh hoc="<<h.chuVi()<<endl;
	cout<<"Dien tich hinh hoc="<<h.dienTich()<<endl;
	cout<<"Chu vi hinh chu nhat="<<h1->chuVi()<<endl;
	cout<<"Dien tich hinh chu nhat="<<h1->dienTich()<<endl;
	cout<<"Chu vi hinh tron="<<h2->chuVi()<<endl;
	cout<<"Dien tich hinh tron="<<h2->dienTich()<<endl;
	return 0;
}
