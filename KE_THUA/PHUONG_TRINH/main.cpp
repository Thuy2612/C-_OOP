#include <iostream>
#include "PhuongTrinh.h"
#include "PtBacNhat.h"
#include "PtBacHai.h"
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	PtBacNhat pt(1,2);
	pt.giaipt();
	
	PtBacHai pt2(1,-3,2);
	pt2.giaipt();
	
	return 0;
}
