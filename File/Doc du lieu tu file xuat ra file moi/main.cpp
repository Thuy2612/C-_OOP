#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Doc du lieu tu file input.txt
xu li du lieu
ghi du lieu ra file out.txt
*/
#include <vector>
#include "Utils.h"

using namespace std;



int main(int argc, char** argv) {
	Student_file st;
	st.fullName=" Tran Thi Thuy";
	cout<<st.format()<<endl;
	
	char* fileName ="input.txt";
	char* fileNameOut ="output.txt";
	vector<string> lines;
	Student_file student;
	vector<Student_file> students;
	vector <string> tokens;
	
	lines=Utils::read_from_file(fileName);
	
	// xu li du lieu
	
	for(int i=0; i<lines.size(); i++)
	{
		//cout<<lines[i]<<endl;
		
		tokens = Utils::split(lines[i],";");
		/* 
			token[0] : maSv;
		 	tokens[1]= ho va ten 
			tokens[2]= ngay thang nam sinh
			tokens[3]= lop mon hoc
			tokens[4]= diem trung binh
		*/
		student.maSV= tokens[0];
		student.fullName=tokens[1];
		student.dob=tokens[2];
		student.className=tokens[3];
	//	student.avg=stof(tokens[4]);
		student.avg=tokens[4];
		students.push_back (student);

		
	//	cout<<tokens[3]<<endl;
		
	}
	
	for(int i=0; i<students.size();i++)
	{
		students[i].show();
	}
	
	sort(students.begin(), students.end(), Utils::sortByAvg);
	
	Utils::write_to_file(students,fileNameOut);
	cout<<"\nChuong trinh hoan tat"<<endl;
	
	return 0;
}


