#include <iostream>
#include "HinhTron.h"
#include "HinhCau.h"
#include "HinhTru.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	HinhTron h1(3);
	HinhCau h2(3);
	cout<<"Duong kinh cua hinh tron d="<<h1.duongKinh()<<endl;
	cout<<"Dien tich cua hinh tron S="<<h1.dienTich()<<endl;
	cout<<"The tich hinh cau V="<<h2.theTich()<<endl;
	
	HinhTru h3(3,2);
	cout<<"Chu vi mat day hinh tru ="<<h3.chuViDay()<<endl;
	cout<<"Dien tich day hinh tru="<<h3.dienTichDay()<<endl;
	cout<<"Dien tich xung quanh hinh tru="<<h3.dienTichXq()<<endl;
	cout<<"Dien tich toan phan hinh tru="<<h3.dienTichTp()<<endl;
	cout<<"The tich hinh tru="<<h3.theTich()<<endl;
	return 0;
}
