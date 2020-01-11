#include <iostream>
#include <iomanip>
#include <math.h>
#include <memory.h>
#include"comlex.h"
using namespace std;

OWNCOMPLEX::OWNCOMPLEX(double r=0.0,double i=0.0)
{
	real=r;
	img=i;
}
OWNCOMPLEX::OWNCOMPLEX()
{
	real=0.0;
	img=0.0;
}
void OWNCOMPLEX::getComplex()
{
	cout<<"real part="<<real<<endl;
	cout<<"image part="<<img<<"i"<<endl;
}
void OWNCOMPLEX::setComplex(double R, double I)
{
	real=R;
	img=I;	
}
void OWNCOMPLEX::addComplex(const OWNCOMPLEX &meh ,const OWNCOMPLEX &met,OWNCOMPLEX &addy)
{
	addy.real=meh.real+met.real;
	addy.img=meh.img+meh.img;
}
