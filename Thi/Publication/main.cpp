#include <iostream>
#include "Publication.h"
#include "Book.h"
#include "Tape.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Book b;
	b.getData();
	b.putData();
	
	Tape t;
	t.getData();
	t.putData();
	return 0;
}
