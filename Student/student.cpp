#include "Student.h"
	
void Student::Input()
{
	cout <<" Nhap ten: ";
	cin >> name;
	
	cout <<"Ngay thang nam sinh: ";
	cin>> dob;
	
	cout <<" Gioi tinh :";
	cin>> gender;
	
	cout <<" Diem toan:";
	cin>> toan;
	
	cout <<" Diem li:";
	cin>> li;
	
	cout <<" Diem hoa:";
	cin>> hoa;
	
}

void Student::Display()
{
	cout  <<"Ten:"<< name << endl;
	cout  <<"Ngay thang nam sinh : "<< dob << endl;
	cout  <<"Gioi tinh:" << gender << endl;
	cout  <<"Diem toan : "<< toan << endl;
	cout  <<"Diem li:"<< li << endl;
	cout  <<"Diem hoa : " << hoa << endl;
	
}

double Student::GetAvg()
{
	return((toan+li+hoa)/3);
	
}

