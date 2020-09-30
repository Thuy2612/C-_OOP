#include "Book.h"
Book::Book():Publication()
{
	pages=0;
}
Book::Book(string title, float price, int pages):Publication(title,price)
{
	this->pages=pages;
}
void Book::getData()
{
	cout<<" ___________Nhap Book___________"<<endl;
	Publication::getData();
	cout<<"\nNhap so trang: ";
	cin>>pages;
}

void Book::putData()
{
	Publication::putData();
	cout<<"\nSo trang sach "<<pages;
}
