#include "Tape.h"

Tape::Tape():Publication()
{
	time=0;
}
Tape::Tape(string title, float price, float time):Publication(title,price)
{
	this->time=time;	
}
void Tape::getData()
{
	cout<<"\n___________Nhap Tape___________"<<endl;
	Publication::getData();
	cout<<"\nNhap thoi luong: ";
	cin>>time;
}

void Tape::putData()
{
	Publication::putData();
	cout<<"\nThoi Luong "<<time;
}
