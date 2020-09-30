#include <iostream>
#include "Time.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Time t(3,4,70);
	t.show();
	
//	 1.1 cong time voi 1 so nguyen la giay, ket qua tra ve la time
	
	int s=10;
	Time t1;
	t1=t+s;
	t1.show();

//	1.2 tru 2  time , ket qua tra ve la giay

	s=t1-t;
	cout<<"\n"<<s<<"s"<<endl;
	
//	1.3. ++, --

	t=t++;
	t.show();
	
	t=t--;
	t.show();
	
//1.4 ==,=!,>,<

	string ss;
	ss=t1==t?"true" : "false";
	if(ss=="true")
		cout<<"\nt1==t"<<endl;
	cout<<"\nt1!=t"<<endl;
	
	ss=t1>t?"true" : "false";
	cout<<"\nt1>t "<<ss<<endl;
	
	ss=t1==t?"true" : "false";
	cout<<"\nt1<t "<<ss<<endl;
	
	
	return 0;
}
