#ifndef UTILS_H
#define UTILS_H

#include <fstream>
#include <string>
#include "Student_file.h"
#include <algorithm>
#pragma GCC diagnostic ignored "-Wwrite-strings"

using namespace std;

class Utils
{
	public:
		Utils();
		
		//	khai bao ham doc du lieu thu file ( read_from_file) co ten file ma ta muon doc (fileName)
		// ham se tra ve vecto cua cac chuoi
		static vector <string> read_from_file(char* fileName);

		// khai bao ham ghi du lieu ra file, ko nhan gia tri tra ve
		static void write_to_file(vector<string> lines, char* fileName);

		// ham nhan vao 1 chuoi, chia chuoi goc thanh cac chuoi con

		static vector <string> split(string line, string delimiter);

		// sap xep

		static bool sortByAvg(Student_file s1, Student_file s2);

		//ghi danh sach da xap sep ra file
		static void write_to_file(vector<Student_file> students, char* fileName);
		
	protected:
};

#endif
