
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
	// thuoc tinh: 
	string name;
	string dob; 
	string gender;
	double toan;
	double li;
	double hoa;
	
	// phuong thuc:
	
	public:
		void Input();
		void Display();
		double GetAvg();
		
	protected:
};

#endif

