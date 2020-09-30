#include "Time.h"

Time::Time()
{
	gio=0;
	phut=0;
	giay=0;
}

Time::Time(int gio, int phut, int giay)
{
	this->gio=gio;
	this->phut=phut;
	this->giay=giay;
}

void Time::show()
{
	if(giay>60) 
	{
		phut=phut+giay/60;
		giay=giay%60;
	}
	if(phut>60)
	{
		gio=gio+phut/60;
		phut=phut%60;
	}
	cout<<"\n"<<gio<<"h"<<phut<<"'"<<giay<<"s"<<endl;
}

// 1.1 cong time voi 1 so nguyen la giay, ket qua tra ve la time
Time operator +(Time t, int s)
{
	t.giay=t.giay+s;
	return t;
}

//1.2 tru 2  time , ket qua tra ve la giay

int Time::tinhSoGiay(int a, int b, int c)
{
	return(a*60*60+b*60+c);
}

int operator -( Time t1, Time t2)
{
	int s1=t1.tinhSoGiay(t1.gio, t1.phut, t1.giay);
	int s2=t2.tinhSoGiay(t2.gio, t2.phut, t2.giay);
	return (s1-s2);
}

// 1.3 ++, --

Time Time:: operator++(int)
{
	Time t;
	t.giay=giay+1;
	return t;
}
Time Time:: operator--(int)
{
	Time t;
	t.giay=giay-1;
	if(giay<0)
	{
		t.phut=phut-1;
		t.giay=59;
	}
	if(phut<0)
	{
		t.gio=gio-1;
		t.phut=59;
	}
	return t;
}

//1.4
bool operator ==(Time t1, Time t2)
{
	int s1= t1.tinhSoGiay(t1.gio, t1.phut, t1.giay);
	int s2= t2.tinhSoGiay(t2.gio, t2.phut, t2.giay);
	if(s1-s2==0)
		return true;
	return false;	
}

bool operator !=(Time t1, Time t2)
{
	int s1=  t1.tinhSoGiay(t1.gio, t1.phut, t1.giay);
	int s2=  t2.tinhSoGiay(t2.gio, t2.phut, t2.giay);
	if(s1-s2==0)
		return false;
	return true;	
}

bool operator >(Time t1, Time t2)
{
	int s1= t1.tinhSoGiay(t1.gio, t1.phut, t1.giay);
	int s2= t2.tinhSoGiay(t2.gio, t2.phut, t2.giay);
	if(s1-s2>0)
		return true;
	return false;
}

bool operator <(Time t1, Time t2)
{
	int s1=  t1.tinhSoGiay(t1.gio, t1.phut, t1.giay);
	int s2=  t2.tinhSoGiay(t2.gio, t2.phut, t2.giay);
	if(s1-s2<0)
		return true;
	return false;
}












