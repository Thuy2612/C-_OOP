#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;

class Time
{
	public:
		int gio;
		int phut;
		int giay;
	
	public:
		Time();
		Time(int gio, int phut, int giay);
		void show();
		int tinhSoGiay(int a, int b, int c);
		
		friend Time operator +(Time t, int s);
		friend int operator -(Time t1, Time t2);
		Time operator ++(int);
		Time operator --(int);
		friend bool operator ==(Time t1, Time t2);
		friend bool operator !=(Time t1, Time t2);
		friend bool operator >(Time t1, Time t2);
		friend bool operator <(Time t1, Time t2);
		
		
	protected:
};

#endif
