#include "Utils.h"

Utils::Utils()
{
	
}

vector <string> Utils::read_from_file(char* fileName)
{
	vector<string> lines;
	string line;
	
	// tao ra luong oc ket noi voi file lam viec (fileName)
	
	ifstream myFile(fileName); 
	
	//kiem tra xem file da duoc mo hay chua
	
	if(myFile.is_open())
	{
		// doc tung dong cho den het
		
		while(getline(myFile,line))
		{
			lines.push_back(line);
		}
		myFile.close();
	}
	else
		cout<<"Khong mo duoc file";
	return lines;
}

void Utils::write_to_file(vector<string> lines, char* fileName)
{
	ofstream myFileOut(fileName);
	if(myFileOut.is_open())
	{
		for(int i=0; i<lines.size();i++)
		{
			myFileOut<<lines[i]<<endl;	
		}
		myFileOut.close();
	}
	else
		cout <<"Khong mo duoc file"<<endl;
	
}

vector <string> Utils::split(string line, string delimiter)
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

bool Utils::sortByAvg(Student_file s1, Student_file s2)
{
	string avg1;
	string avg2;
	
	avg1=s1.avg;
	avg2=s2.avg;
	
	if(avg1<avg2)
	{
		return true;
	}

	else if(avg1<avg2)
		return false;
		
	else
	{
		return(st1.format()<st2.format());	
	}
}

void Utils::write_to_file(vector<Student_file> students, char* fileName)
{
	ofstream myOutput(fileName);
	
	if(myOutput.is_open())
	{
		for(int i=0; i<students.size();i++)
		{
			myOutput<< students[i].maSV<<";";
			myOutput<< students[i].fullName<<";";
			myOutput<< students[i].dob<<";";
			myOutput<< students[i].avg<<endl;
			
		}
		 
		 myOutput.close();
	}
	else 
		cout<<"Khong doc duoc file";
}






