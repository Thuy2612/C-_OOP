#include "HH.h"
#include "HinhTron.h"
#include "Hcn.h"
#include "Htg.h"
#include<cmath>
#include<vector>
#include<algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
	Xay dung lop hinh hoc : thuoc tinh ( name)
						    phuong thuc ( khoi tao, show, tinh dien tich, tinh chu vi)
			
	Xay dung lop hinh tron ke thua lop hinh hoc, bo sung:
							thuoc tinh ( ban kinh)
							phuong thuc ( khoi tao, show, tinh dien tich, tinh chu vi)
	Xay dung lop hinh chu nhat ke thua lop hinh hoc, bo sung:
							thuoc tinh ( a,b)
							phuong thuc ( khoi tao, show, tinh dien tich, tinh chu vi)
	Xay dung lop hinh tam giac  ke thua lop hinh hoc, bo sung:
							thuoc tinh ( a,b,c)
							phuong thuc ( khoi tao, show, tinh dien tich, tinh chu vi)
1. Tao danh sach luu cac doi tuong hinh hoc, hinh chu nhat, hinh tam giac, hinh tron
2. Sap xep cac hinh theo thu tu tang dan dien tich
3. Sap xep cac hinh theo thu tu tang dan chu vi
*/

// dinh nghia cach so sanh
bool theoDt(HH*dt1_,HH*dt2_)
{
	double dt1=dt1_->dt();
	double dt2=dt2_->dt();
	if(dt1>dt2)
		return true; // yeu cau ham sort doi vi tri
	return false;   // khong yeu cau ham sort doi vi tri
}

bool theoTen(HH*dt1_, HH*dt2_)
{
	string name1=dt1_->getName();
	string name2=dt2_->getName();
	if(name1<name2)
		return true;
	return false;
}

int main(int argc, char** argv) {
	
//	vector<HH*> ds;
	HH** ds=new HH*[4]; // cap phat bo nho
	
	HH hh("Hinh hoc");
	//hh.show();
	HinhTron ht("Hinh tron", 3);
	//ht.show();
	Hcn hcn("Hinh chu nhat", 1,2);
	//hcn.show();
	Htg htg("Hinh tam giac", 5,4,3);
	
	// day dia chi cuar hh,ht,hcn,htg vao danh sach
	
//	ds.push_back(&hh);
//	ds.push_back(&ht);
//	ds.push_back(&hcn);
//	ds.push_back(&htg);

	ds[0]=&hh;
	ds[1]=&ht;
	ds[2]=&hcn;
	ds[3]=&htg;

	cout<<"\nDanh sach truoc khi sap xep"<<endl;
	for(int i=0;i<4;i++)
	{
		ds[i]->show();
	}
	sort(ds,ds+4,theoDt);
	cout<<"\nDanh sach sau khi sap xep"<<endl;
	for(int i=0;i<4;i++)
		ds[i]->show();
	
/*	for(int i=0; i<ds.size() ;i++)
	{
		ds[i]->show(); // doi voi con tro , toan tu "." thay bang toan tu "->"
	}
	
	cout<<"\nDanh sach sau khi sap xep"<<endl;
	// ham sort la ham sap xem theo tieu chi nao do
	sort(ds.begin(),ds.end(), theoDt);
	
	for(int i=0; i<ds.size() ;i++)
	{
		ds[i]->show(); // doi voi con tro , toan tu "." thay bang toan tu "->"
	}
	
*/	
	sort(ds,ds+4,theoTen);
	cout<<"\nDanh sach sau khi sap xep"<<endl;
	for(int i=0;i<4;i++)
		ds[i]->show();
	return 0;
}
