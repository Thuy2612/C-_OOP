#include "HH.h"
#include <iostream>
using namespace std;
//____________________________________________________

HH::HH()
{
	string name = "\n0";
}

//_____________________________________________________

HH::HH(string name)
{
	this-> name=name;	
}

//________________________________________________________

void HH::show()
{
	cout<<name<<" Co dien tich :"<<dt()<<" Co chu vi:"<<cv()<<endl;
	
}

//________________________________________________________

double HH::dt()
{
	return 0;
}

//________________________________________________________

double HH::cv()
{
	return 0;
}

string HH::getName()
{
	return name;
}


//__________________________________________________________

