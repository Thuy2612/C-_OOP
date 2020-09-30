#include <iostream>
#include "TamGiac.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	TamGiac tg(3,5,4);
	cout<<"Chu vi tam giac="<<tg.chuVi()<<endl;
	cout<<"Dien tich tam giac="<<tg.dienTich()<<endl;
	tg.dinhDang();
	return 0;
}
