#include <iostream>
#include <string>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
xay dung lop phuong trinh 
Xay sung lop phung trinh bac 1( ghi de phuong thuc giai phung trinh
Xay dung lop phuong tinh bac 2( ghi de phuong thuc giai pt
*/
int main(int argc, char** argv) {
	
	Mother hoa;
	hoa.gioiThieu();
	
	Daughter mai("Mai", 20);
	mai.gioiThieu();
	return 0;
}


