#ifndef PTBACNHAT_H
#define PTBACNHAT_H
#include"PhuongTrinh.h"

class PtBacNhat:public PhuongTrinh
{
	private:
		double a,b;
		
	public:
		PtBacNhat(double a_, double b_);
		void giaipt();
		
	protected:
};

#endif
