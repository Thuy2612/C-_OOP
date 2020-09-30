#ifndef MTIME_H
#define MTIME_H
#include <iostream>
using namespace std;

class Mtime
{
	int hours;
	int minutes;
	int seconds;
	
	public:
		Mtime();
		Mtime(int hours, int minutes,int seconds);
		void show();
		Mtime operator +(Mtime time);
		
	protected:
};

#endif
