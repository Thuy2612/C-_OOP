#include "PhanSo.h"
PhanSo::PhanSo()
{
	ts=0;
	ms=1;
}

int PhanSo::ucln(int a, int b)
{
	if(b==0) return a;
	else return ucln(b,a%b);
}

PhanSo::PhanSo(double ts, double ms)
{
	this->ts=ts/ucln(ts, ms);
	this->ms=ms/ucln(ts,ms);
}
PhanSo PhanSo::rutGon()
{
	int u=ucln(ts,ms);
	PhanSo ps;
	ps.ts=ts/u;
	ps.ms=ms/u;
	return ps;
}

ostream& operator <<(ostream& out, PhanSo ps)
{
	if(ps.ms==0)
		 out<<"PhanSo khong xac dinh"<<endl;
	else
	{
		if(ps.ms==1)
			out<<ps.ts<<endl;
		else 
		{
			if(ps.ms<0) 
				out<<ps.ts*(-1)<<"/"<<ps.ms*(-1)<<endl;
			else
			{
				if (ps.ts==ps.ms)
					out<<1<<endl;
				else
					out<< ps.ts<<"/"<<ps.ms<<endl;	
			 } 
		}
	}
	
	return out;
}

istream& operator >>(istream& in, PhanSo &ps)
{

	cout <<"Nhap vao tu so:";
	in>>ps.ts;
	cout <<"Nhap vao mau so: ";
	in>>ps.ms;
	return in;
}

PhanSo operator +( PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.ts=ps1.ts*ps2.ms+ps2.ts*ps1.ms;
	ps.ms=ps1.ms*ps2.ms;
	ps=ps.rutGon();
	return ps;
}
PhanSo operator -( PhanSo ps1, PhanSo ps2)
{
	PhanSo ps;
	ps.ts=ps1.ts*ps2.ms-ps2.ts*ps1.ms;
	ps.ms=ps1.ms*ps2.ms;
	ps=ps.rutGon();
	return ps;
}

PhanSo operator +( PhanSo ps, int x)
{
	PhanSo kq;
	kq.ts=ps.ts+x*ps.ms;
	kq.ms=ps.ms;
	return kq;
}





