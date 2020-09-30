#ifndef PUBLICATION_H
#define PUBLICATION_H
#include <iostream>
using namespace std;

class Publication
{
	string title;
	float price;
	
	public:
		Publication();
		Publication(string title, float price);
		virtual void getData()=0;
		virtual void putData();
		
	protected:
};

#endif
