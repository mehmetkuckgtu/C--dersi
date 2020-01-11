#include <iostream>
#include"comlex.h"
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) 
{
	
	OWNCOMPLEX AT(0,0),avrat,silah;//silah() diye obje olusturulamaz. parametre yoksa silah gibi cagir.
	AT.getComplex();
	AT.setComplex(3,4);
	AT.getComplex();
	avrat.setComplex(2,5);
	avrat.getComplex(); 
	silah.addComplex(AT,avrat,silah);
	silah.getComplex();
	return 0;
}
