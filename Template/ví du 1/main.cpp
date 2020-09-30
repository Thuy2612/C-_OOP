#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int MyAbs(int x);
long MyAbs(long x);
double MyAbs(double X);
*/
//SFMN
template <class T>
T MyAbs( T x)
{
	return(x>0)?x:-x;
}

int main(int argc, char** argv) {
	cout<<"Tri tuyet doi |x|="<<MyAbs(3.14)<<endl;
	cout<<"Tri tuyet doi |x|="<<MyAbs(-3.5)<<endl;
	return 0;
}
/*
int MyAbs(int x)
{
	return x>=0?x:-x;
}
long MyAbs(long x)
{
	return x>=0?x:-x;
}
double MyAbs(double x)
{
	return x>=0?x:-x;
}
*/

