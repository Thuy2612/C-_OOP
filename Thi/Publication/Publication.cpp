#include "Publication.h"
Publication::Publication()
{
	title="";
	price=0;
}
Publication::Publication(string title, float price)
{
	this->title=title;
	this->price=price;
	
}

void Publication:: getData()
{
	cout<<"Nhap title: ";
	fflush(stdin);
	getline(cin,title);
	
	cout<<"\nNhap price: ";
	fflush(stdin);
	cin>>price;	
}
void Publication::putData()
{
	cout<<"\nTitle "<<title;
	cout<<"\nPrice "<<price;
}

