#include "PhanSo.h"

PhanSo::PhanSo()
{
	// khoi tao ca gia tri cho bien thanh vien
	tuSo=0;
	mauSo=1;
}

PhanSo::PhanSo(int ts, int ms)
{
	tuSo=ts;
	mauSo=ms;
}

void PhanSo::hienThi()
{
	if(mauSo==1)
	 cout<<tuSo;
	else
	{
		if (mauSo<0)
		{
			mauSo*=-1;
			tuSo*=-1;
		}
	cout<<tuSo<<"/"<<mauSo;
}
}

PhanSo ::PhanSo(PhanSo& ps)
{
	tuSo=ps.tuSo;
	mauSo=ps.mauSo;
	
}
PhanSo PhanSo::operator +(PhanSo ps)
{
	PhanSo ps_moi;
	ps_moi.tuSo=tuSo*ps.mauSo+mauSo*ps.tuSo;
	ps_moi.mauSo=mauSo*ps.mauSo;
	return ps_moi;
}

PhanSo PhanSo::operator -(PhanSo ps)
{
	PhanSo ps_moi;
	ps_moi.tuSo=tuSo*ps.mauSo - mauSo*ps.tuSo;
	ps_moi.mauSo=mauSo*ps.mauSo;
	return ps_moi;
}

int PhanSo::ucln(int a, int b)
{
	if(b==0) return a;
	else 
		return ucln(b,a%b);
}

PhanSo PhanSo::rutGon()
{
	int u=ucln(tuSo,mauSo);
	PhanSo ps;
	ps.tuSo=tuSo/u;
	ps.mauSo=mauSo/u;
	
	return ps;
}

/*PhanSo PhanSo:: operator *(PhanSo ps)

{
	PhanSo res;
	res.tuSo=tuSo*ps.tuSo;
	res.mauSo=mauSo*ps.mauSo;
}*/
// ham ban

PhanSo operator *(PhanSo ps1, PhanSo ps2) // ko la ham thanh vien nen khong co ten lop va khong co phan so ngam dinh nen phai truyen vao hai tham so
{
	PhanSo ps;
	ps.tuSo = ps1.tuSo*ps2.tuSo;
	ps.mauSo= ps1.mauSo*ps2.mauSo;
	return ps;
}

/*bool PhanSo:: operator > (PhanSo ps)
{
	// phan so thu nhat la phan so cos tuSo va mauSo
	//phan so thu hai la phan so ps
	if(tuSo*ps.mauSo-ps.tuSo*mauSo>0)
		return true;
	else
		 return false;
	
}
*/

bool operator > (PhanSo ps1, PhanSo ps2)
{
	if((ps1.tuSo*ps2.mauSo - ps2.tuSo*ps1.mauSo)>0)
		return true;
	else
		return false;
}
bool PhanSo::operator >= (PhanSo ps)
{
	if( tuSo*ps.mauSo-ps.tuSo*mauSo>=0)
		return true;
	else 
		return false;
 } 
 
bool PhanSo::operator == (PhanSo ps)
{
	if( tuSo*ps.mauSo-ps.tuSo*mauSo==0)
		return true;
	else 
		return false;
 } 
 // nap chong toan tu ++ps
PhanSo PhanSo::operator++()
{
	PhanSo res;
	res.tuSo=mauSo+tuSo;
	res.mauSo=mauSo;
	return res;
  }  
// nap chong toan tu  ps++ 
PhanSo PhanSo::operator++(int)
{
	PhanSo res;
	res.tuSo=mauSo+tuSo;
	res.mauSo=mauSo;
	return res;
  }
 
 
PhanSo operator -(PhanSo ps)
{
	PhanSo res;
	res.tuSo=ps.tuSo*(-1);
	res.mauSo=ps.mauSo;
	return res;
 } 

ostream& operator << (ostream& out, PhanSo ps)
{
	out<< ps.tuSo<<"/"<<ps.mauSo;
	return out;
}

istream& operator >> (istream& input, PhanSo ps)
{
	cout <<"Nhap vao tu so:";
	input>>ps.tuSo;
	cout <<"Nhap vao mau so: ";
	input>>ps.mauSo;
	return input;
	
}
/*PhanSo PhanSo::operator -()
{
	PhanSo res;
	res.tuSo=tuSo*(-1);
	res.mauSo=mauSo;
	return res;
	
 } */
