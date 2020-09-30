#ifndef NGUOI_H
#define NGUOI_H

#include <iostream>
using namespace std;


class Nguoi
{
	protected: 
		string hoTen;
		int tuoi;
		string gioiTinh;
	
	public:
		Nguoi();
		Nguoi(string hoTen, int tuoi, string gioiTinh);
		virtual void gioiThieu();// phuong thuc ao
		// virtual void gioiThieu()=0; // phuong thuc thuan ao hay la phuong thuc truu tuong
		/*
		Can phai khai bao phuong thuc gioi thieu la phuong thuc ao, 
		tuc la cac phuong thuc o lop dan xuat co tinh da hinh*/
		
		
};

#endif

/*bat ki lop nao co phuong thuc truu tuong thi ca lop  do la lop truu tuong, khi lop duoc goi la lop truu tuong thi 
 no khong dinh nghi..... no sinh ra chi de cac lop khac ke thua ma thoi
 
