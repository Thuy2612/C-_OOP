#ifndef TAPE_H
#define TAPE_H

#include "Publication.h"

class Tape : public Publication
{
	float time;
	public:
		Tape();
		Tape(string title, float price, float time);
		void getData();
		void putData();		
	protected:
};

#endif
