#include <iostream>
#include "Nguoi.h"
#include "SinhVien.h"
#include "NhanVien.h"
#include "KhachHang.h"
#include <vector>
#include<algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool theoTuoi(Nguoi* n1, Nguoi* n2)
{
	int n1_=n1->tuoi;
	int n2_=n2->tuoi;
	if(n1_<n2_)
	return true;
	return false;
}

bool theoTen(Nguoi* n1, Nguoi* n2)
{
	string avg1;
	string avg2;
	
	avg1=n1->hoTen;
	avg2=n2->hoTen;
	
	if(avg1<avg2)
	return true;
	return false;
}
int main(int argc, char** argv) {
	SinhVien sv1("Thuy",12,"nu","16151172",10,9,9);
	NhanVien nv1("Nga",22,"nu","nv1234",22,10);
	KhachHang kh1("An",21,"nam",13,100);
/*	sv1.gioiThieu();
	nv1.gioiThieu();
	kh1.gioiThieu();*/
	
	vector<Nguoi*> ds;
	ds.push_back(&sv1);
	ds.push_back(&nv1);
	ds.push_back(&kh1);

	
	cout<<"\nDanh sach truoc khi sap xep"<<endl<<endl;
	for(int i=0; i<ds.size() ;i++)
	{
		ds[i]->gioiThieu();
		cout<<endl;
	}
	
	cout<<"\nDanh sach sau khi sap xep theo tuoi"<<endl;
	sort(ds.begin(),ds.end(), theoTuoi);
	for(int i=0; i<ds.size() ;i++)
	{
		ds[i]->gioiThieu();
		cout<<endl;
	}
	
	cout<<"\nDanh sach sau khi sap xep theo ten"<<endl;
	sort(ds.begin(),ds.end(), theoTen);
	for(int i=0; i<ds.size() ;i++)
	{
		ds[i]->gioiThieu();
		cout<<endl;
	}
	
	return 0;
	
}
