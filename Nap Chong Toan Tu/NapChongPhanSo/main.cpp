#include <iostream>
#include <string>
#include"PhanSo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	PhanSo ps0;
	cin>>ps0;
	cout << ps0 <<endl;
	
	PhanSo ps1(1,9);
	ps1.hienThi();
	cout<<endl;
	
	PhanSo ps_c(ps1);
	
	PhanSo ps2(1,9);
	ps2.hienThi();
	cout<<endl;
	
	PhanSo ps33;
	ps33=-ps1;
	ps33.hienThi();
	
	string std;
	std= ps1>ps2? "true" : "false";
	cout << std<<endl;
	
	cout <<ps1<<endl;
	

	
	PhanSo ps10;
	ps10=++ps1;
	ps10.hienThi();
	cout<<endl;
	
	cout << (ps1>ps2) <<endl;
	cin.get();
	
	cout<< (ps1>=ps2)<<endl;
	cin.get();

	string st;
	st=ps1==ps2? "true" : "false" ;
	cout<<st<<endl;
	cin.get();
	
	PhanSo ps3;
	ps3=ps1+ps2;
	ps3.hienThi();
	cout<<endl;
	
	PhanSo ps4;
	ps4=ps2-ps1;
	ps4.hienThi();
	cout<<endl;
	
	PhanSo ps5;
	ps5=ps2*ps1;
	ps5.hienThi();
	cout<<endl;
	
	
	return 0;
}
