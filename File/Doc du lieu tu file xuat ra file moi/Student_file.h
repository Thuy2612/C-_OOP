#ifndef STUDENT_FILE_H
#define STUDENT_FILE_H
#include <iostream>
#include <string>
#include <vector>
#include "Utils.h"

using namespace std;
class Student_file
{
	
	public:
		string maSV;
		string fullName;
		string dob;
		string className;
		string avg;
		Student_file();
		void show();
		string format();
		vector <string> split(string line, string delimiter);
	protected:
};

#endif

