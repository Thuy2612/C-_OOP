#include "Mtime.h"
Mtime::Mtime()
{
	hours=0;
	minutes=0;
	seconds=0;
}

Mtime::Mtime(int hours, int minutes, int seconds )
{
	this->hours=hours;
	this->minutes=minutes;
	this->seconds=seconds;
}

void Mtime::show()
{
	if(seconds>=60)
	{
		minutes+=minutes/60;
		seconds=seconds%60;
	}
	if(minutes>=60)
	{
		hours+=hours/60;
		minutes=minutes%60;
	}
	
	cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}

Mtime Mtime :: operator+(Mtime time)
{
	Mtime mtime;
	mtime.seconds=time.seconds+seconds;
	mtime.minutes=time.minutes+minutes;
	mtime.hours=time.hours+hours;
	return mtime;
}
