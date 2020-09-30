//____________main.cpp_______________

#include <iostream>
#include <cmath>
#include "SoPhuc.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
// _________Ham nhap xuat_____________	
	SoPhuc sp1;
	cin >> sp1;
	cout<<"sp1=" <<sp1<<endl;
	
	SoPhuc sp2;
	cin >> sp2;
	cout<<endl<<"sp2=" <<sp2<<endl;	

//_____________Toan tu 2 ngoi_________________	
	SoPhuc sp3;
	sp3=sp1+sp2;
	cout<<endl<<"sp1+sp2="<<sp3<<endl;
	
	SoPhuc sp4;
	sp4=sp1-sp2;
	cout<<"sp1-sp2="<<sp4<<endl;
	
	SoPhuc sp5;
	sp5=sp1*sp2;
	cout<<"sp1*sp2="<<sp5<<endl;
	
	SoPhuc sp6;
	sp6=2*sp2;
	cout<<"2*sp2="<<sp6<<endl;
	
	SoPhuc sp7(sp1);
	cout<<"Sao chep sp7 = sp1 ="<<sp7<<endl;

//______________Toan tu mot ngoi______________________		
	SoPhuc sp8;
	sp8=++sp1;
	cout<<endl<<"sp8=++sp1="<<sp8;
	
	SoPhuc sp9;
	sp9=sp1++;
	cout<<endl<<"sp9=sp1++="<<sp9;
	
	SoPhuc sp10;
	sp10=--sp1;
	cout<<endl<<"sp10=--sp1="<<sp10;
	
	SoPhuc sp11;
	sp11=sp1--;
	cout<<endl<<"sp11=sp1--="<<sp11;
	
	SoPhuc sp12;
	sp12=-sp1;
	cout<<endl<<"sp12=-sp1="<<sp12<<endl;
	
	
//___________Toan tu so sanh____________________	
	string lh;
	lh=sp1>sp2?"true":"false";
	cout<<endl<<"So Sanh lon hon "<< lh;
	
	string nh;
	nh=sp1<sp2?"true":"false";
	cout<<endl<<"So Sanh nho hon "<< nh;
	
	string bb;
	bb=sp1==sp2?"true":"false";
	cout<<endl<<"So Sanh bang "<< bb;
	
	string lb;
	lb=sp1>=sp2?"true":"false";
	cout<<endl<<"So Sanh lon hon hoac bang  "<< lb;
	
	string nb;
	nb=sp1<=sp2?"true":"false";
	cout<<endl<<"So Sanh nho hon hoac bang "<< nb;
	
	return 0;
	
}


