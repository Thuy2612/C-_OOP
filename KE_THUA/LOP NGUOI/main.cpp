#include <iostream>
//#include <string>
#include"Nguoi.h"
#include"SinhVien.h"
#include"NhanVien.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Tao lop NGUOI voi thong tin : hoTen, ngaySinh, gioiTinh
								Phuong thuc khoi tao: gioi thieu
	Tao lop SINH VIEN  ke thua lop NGUOI , bo sung : maSv, diem Toan, diem Ly, diem Hoa
								Phuong thuc tinh diem trung binh
	Tao lop NHAN VIEN , thong tin bo sung: ma nhan vien, he so luong
								Phuong thuc : tinh luong
								
								
															
*/
int main(int argc, char** argv) {
	
	cout<<"\n----------------------Nguoi------------------------- (:"<<endl;
	Nguoi nguoi("Tran Thi Thuy", 22, "Nu");
	nguoi.gioiThieu();

	Nguoi* nguoi1; // tao con tro chi den doi tuong nguoi1
	
	cout<<"\n---------------------Sinh Vien----------------------(:"<<endl;
	SinhVien sv(" Nguyen Xuan Son", 22, "Nam", "1651172",9,8,7.5);
	nguoi1=&sv;
	// doi tuong sinh vien cung la 1 kieu nguoi, gasn dia chi cua no bang con tro chi toi doi tuong nguoi
	nguoi1->gioiThieu(); // nguoi1 dang la kieu du lieu con tro
	
	cout<<"\n---------------------Nhan Vien----------------------(:"<<endl;
	NhanVien nv("Tran Thi Thuy", 22 ,"Nu", "NV 123445", 6);
	nguoi1=&nv;
	nguoi1->gioiThieu();
	//nv.gioiThieu();
	
	return 0;
}
