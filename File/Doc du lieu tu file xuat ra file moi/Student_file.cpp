#include "Student_file.h"

Student_file::Student_file()
{
	
}

void Student_file::show()
{
	cout<<"----------------------------------------"<<endl;
	cout<<"Ma Sinh Vien: "<<maSV<<endl;
	cout<<"Ho va ten: "<<fullName<<endl;
	cout<<"NgaySinh: "<<dob<<endl;
	cout<<"Lop mon hoc: "<<className<<endl;
	cout<<" Diem trung binh: "<<avg<<endl;
	
}

string Student_file::format()
{
	string newName=""; // newName= Ten_Dem_Ho_
	vector<string> tokens;
	tokens=split(fullName," ");
	for(int i=tokens.size()-1;i>=0;i--)
	{
		if(i==0)
		{
			newName+=tokens[i];
			break;
		}
		else
			newName+=tokens[i]+" ";
	}
	
	return newName;
}
vector <string> Student_file::split(string line, string delimiter)
{
	vector<string> tokens; // tokens la chuoi con sau khi tach duoc tu cac chuoi ban dau
	string token;
	size_t pos=0; // size_t la 1 kieu du lieu chi so luong phan tu tron 1 vecto
	while((pos=line.find(delimiter))!=string ::npos)
	{
		token = line.substr(0,pos);
		tokens.push_back(token);
		line.erase(0, pos+delimiter.length()); // xoa chuoi ban dau
		
	}
	tokens.push_back(line);
}


