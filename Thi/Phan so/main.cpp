#include <iostream>
#include "PhanSo.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	PhanSo ps;
	cin>>ps;
	ps=ps.rutGon();
	cout<<"\nps="<<ps<<endl;
	
	PhanSo ps1(1,6);
	PhanSo ps2(2,4);
	ps=ps1+ps2;
	cout<<"\nps1+ps2="<<ps<<endl;
	
	int x=2;
	ps=ps1+x;
	cout<<"ps1+x="<<ps<<endl;
	return 0;
}
