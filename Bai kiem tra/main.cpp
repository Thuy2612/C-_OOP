#include <iostream>
#include "Hoadon.h"
#include "TienDien.h"
#include "TienNuoc.h"
#include<vector>
#include<algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool theoGT(HoaDon*gt1_,HoaDon*gt2_)
{
	double gt1=gt1_->thanhTien();
	double gt2=gt2_->thanhTien();
	if(gt1>gt2)
		return true;
	return false;
}

int main(int argc, char** argv) {
	
	vector<HoaDon*> ds;
	
	
	TienDien td1(1,"28/04/1020","Thuy",54,"ho_gia_dinh",800);
	TienDien td2(2,"28/04/1020","CS",50,"doanh_nghiep",800);
	TienNuoc tn1(3,"28/04/1020","Nga",20,300);
	TienNuoc tn2(3,"28/04/1020","An",29,300);
	
	ds.push_back(&td1);
	ds.push_back(&td2);
	ds.push_back(&tn1);
	ds.push_back(&tn2);
	
	cout<<"\nDanh sach truoc khi sap xep"<<endl<<endl;
	
	for(int i=0; i<ds.size() ;i++)
	{
		ds[i]->show();
		cout<<endl;
	}
	
	cout<<"________________________________________________________________"<<endl;
	
	cout<<"\nDanh sach sau khi sap xep"<<endl;
	
	sort(ds.begin(),ds.end(), theoGT);
	
	for(int i=0; i<ds.size() ;i++)
	{
		ds[i]->show();
		cout<<endl;
	}
	int check;
	cout<<" Nhap so hoa don cua don hang can tim kiem: ";
	cin>>check;
	for(int i=0;i<ds.size();i++)
	{
		if(ds[i]->soHoaDon==check) 
			ds[i]->show();
		}
	
	return 0;
}
