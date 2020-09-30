#include "Daughter.h"

Daughter::Daughter():Mother() // goi den phuong thuc khoi tao cua ham co so
{
	// ten="No name (:";
	
	tuoi=0;
}

Daughter::Daughter(string ten_,int tuoi_): Mother(ten)
{
	//ten=ten_;
	
	tuoi=tuoi_;
}

void Daughter::gioiThieu()
{
	cout<<"Con:"<<endl;
	cout<<"Ten con:"<<ten<<endl<<"Tuoi con:"<<tuoi<<endl;
}
