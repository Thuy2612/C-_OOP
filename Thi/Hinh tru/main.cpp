#include <iostream>
#include "TruTron.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	TruTron t(2,3);
	cout<<"Dien tich day cua hinh tru = "<<t.dienTichDay()<<endl;
	cout<<"Dien tich xung quanh cua hinh tru = "<<t.dienTichXq()<<endl;
	cout<<"The tich cua hinh tru = " <<t.theTich()<<endl;
	return 0;
}
