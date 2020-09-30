
//_________________SoPhuc.cpp____________

#include "SoPhuc.h"

//____________________Ham khong co tham chieu_____________
SoPhuc::SoPhuc()
{
	a=0;
	b=0;
}

//___________________Ham co tham chieu_______________
SoPhuc::SoPhuc(int phanThuc, int phanAo)
{
	a=phanThuc;
	b=phanAo;
}

//_______________ Ham nhap - xuat_____________________________
ostream& operator << (ostream& out, SoPhuc sp)
{
	if(sp.a!=0)
	{
	if(sp.b==0)
		out<<sp.a;
		
	else if (sp.b==-1)
		
		out <<sp.a<<"-i";
		
	else if(sp.b<0&&sp.b!=-1)

		out<<sp.a<<sp.b<<"i";
		
	else if(sp.b==1)
	
		out<<sp.a<<"+i";
		
	else if(sp.b>0 &&sp.b!=1)
	
		out<<sp.a<<"+"<<sp.b<<"i";
	}
	else
	{
		if(sp.b==0)
			out<<"0";
		
		else if (sp.b==-1)
		
			out <<"-i";
		
		else if(sp.b<0&&sp.b!=-1)

			out<<sp.b<<"i";
		
		else if(sp.b==1)
	
			out<<"i";
		
		else if(sp.b>0 &&sp.b!=1)
	
			out<<sp.b<<"i";	
	}
	return out;
}

istream& operator >> (istream& in, SoPhuc &sp)
{
	cout <<"Nhap vao phan thuc so phuc: ";
	in >> sp.a;
	cout <<"Nhap vao phan ao so phuc: ";
	in >> sp.b;
	return in;
}

// _______________toan tu hai ngoi______________________________

SoPhuc::SoPhuc(SoPhuc &sp) 
{
           a=sp.a;
           b=sp.b;
}
           
           
SoPhuc operator +(SoPhuc sp1, SoPhuc sp2)

{
	SoPhuc sp;
	sp.a=sp1.a+sp2.a;
	sp.b=sp1.b+sp2.b;
	return sp;
}

SoPhuc operator -(SoPhuc sp1, SoPhuc sp2)
{
	SoPhuc sp;
	sp.a=sp1.a-sp2.a;
	sp.b=sp1.b-sp2.b;
	return sp;
}

SoPhuc operator *(SoPhuc sp1, SoPhuc sp2)
{
	SoPhuc sp;
	sp.a=sp1.a*sp2.a -sp1.b*sp2.b;
	sp.b=sp1.a*sp2.b+sp1.b*sp2.a;
	return sp;
}

SoPhuc operator *(int k, SoPhuc sp2)
{
	SoPhuc sp;
	sp.a=k*sp2.a;
	sp.b=k*sp2.b;
	return sp;
}

//________________Toan tu mot ngoi______________________
SoPhuc SoPhuc::operator++()
{
	SoPhuc sp;
	sp.a=a+1;
	sp.b=b;
	return sp;	
}

SoPhuc SoPhuc::operator++(int)
{
	SoPhuc sp;
	sp.a=a+1;
	sp.b=b;
	return sp;	
}

SoPhuc SoPhuc::operator--()
{
	SoPhuc sp;
	sp.a=a-1;
	sp.b=b;
	return sp;	
}

SoPhuc SoPhuc::operator--(int)
{
	SoPhuc sp;
	sp.a=a-1;
	sp.b=b;
	return sp;	
}


SoPhuc SoPhuc::operator -()
{
	SoPhuc res;
	res.a=a*(-1);
	res.b=b*(-1);
	return res;
 } 
 
//_________________________Toan tu so sanh________________________________________
float SoPhuc::modul(int i, int j)
{
	float modul;
	modul= ( i*i+j*j);
	return modul;
}

bool SoPhuc::operator > (SoPhuc sp)
{
	float m1, m2;
	m1=modul (a,b);
	m2=modul (sp.a ,sp.b);
	if (m1>m2)
		return true;
	else
		return false;
}
bool SoPhuc::operator == (SoPhuc sp)
{
	float m1, m2;
	m1=modul (a,b);
	m2=modul (sp.a ,sp.b);
	if (m1==m2)
		return true;
	else
		return false;
}
bool SoPhuc::operator < (SoPhuc sp)
{
	float m1, m2;
	m1=modul (a,b);
	m2=modul (sp.a ,sp.b);
	if (m1<m2)
		return true;
	else
		return false;
}

bool SoPhuc::operator <= (SoPhuc sp)
{
	float m1, m2;
	m1=modul (a,b);
	m2=modul (sp.a ,sp.b);
	if (m1<m2||m1==m2)
		return true;
	else
		return false;
}

bool SoPhuc::operator >= (SoPhuc sp)
{
	float m1, m2;
	m1=modul (a,b);
	m2=modul (sp.a ,sp.b);
	if (m1>m2||m1==m2)
		return true;
	else
		return false;
}
