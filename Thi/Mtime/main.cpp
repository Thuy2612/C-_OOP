#include <iostream>
#include "Mtime.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Mtime time1(1,2,3);
	Mtime time2(11,59,59);
	Mtime time;
	time1.show();
	time2.show();
	time =time1+time2;
	time.show();
	return 0;
}
