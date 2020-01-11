#ifndef OWN_COMPLEX
#define OWN_COMPLEX
#include <iostream>
#include <cstdlib>
#include <fstream>

class OWNCOMPLEX
{
	public:
		//Constructors objeyi ilk tanimlama tanimlanma asla return olmaz
		OWNCOMPLEX(double r,double i);
		OWNCOMPLEX();
		void setComplex(double R, double I);
		void getComplex();
		void addComplex(const OWNCOMPLEX &meh ,const OWNCOMPLEX &met,OWNCOMPLEX &addy);
	private:
		double real;
		double img;
};
#endif
