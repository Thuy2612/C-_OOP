#ifndef BOOK_H
#define BOOK_H

#include "Publication.h"

class Book : public Publication
{
	int pages;
	
	public:
		Book();
		Book(string title, float price, int pages);
		void getData();
		void putData();
	protected:
};

#endif
