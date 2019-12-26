/************************
kodu olusturan : mehmet kucuk
c++ kitabindaki belli baþli ornekler yapilmistir
*/

#include <iostream>// c de stdio kütüphanesini kullaniyoruz.

using namespace std;

int main(int argc, char** argv) 
{
	//1. ve 2. sayfa 14 
	cout<<"\n1., 2.,3.  kisim\n"<<endl;
	int feet=0, inches=0;
	int count=0;
	double distance=1.5;
	//3. atama yapmaz isek hafizadaki degeri verir.
	int ax,bx,cx,dx,ex,gx,hx;
	cout<<feet<<endl<<inches<<endl<<count<<endl<<distance<<endl;
	cout<<ax<<endl<<bx<<endl<<cx<<endl<<dx<<endl<<ex<<endl<<gx<<endl<<hx;
	//4. sayfa 22
	cout<<"\n4. kisim\n"<<endl;
	double x,y,z;
	cout<<"x,y,z deger giriniz"<<endl;
	cout<<"x=";
	cin>>x;
	cout<<"y=";
	cin>>y;
	cout<<"z=";
	cin>>z;
	double fourOne=3*x;
	double fourTwo=(3*x)+(y);
	double fourThree=(x+y)/(7);
	double fourfour=((3*x)+y)/(z+2);
	cout<<fourOne<<endl<<fourTwo<<endl<<fourThree<<endl<<fourfour;
	//5.
	cout<<"\n5. kisim\n"<<endl;
	char a,b,c;
	a='b';
	b='c';
	c=a;
	cout<<a<<endl<<b<<endl<<c<<endl<<'c';//cikti b,c,b dir.
	//6.
	cout<<"\n6. kisim\n"<<endl;
	// 1/3 int bolmesidir ancak (1.0/3.0)*3.0 yapsaydik sanuc 1 olacakti
	int number = (1/3) * 3;
	cout << "(1/3) * 3 is equal to " << number;
	
	cout<<"\n7. kisim\n"<<endl;
	int number1, number2;
	cout << "Enter two whole numbers: ";
	cin >> number1 >> number2;
	cout << number1 << " divided by " << number2
	<< " equals " << (number1/number2) << "\n"
	<< "with a remainder of " << (number1%number2)
	<< "\n";
	return 0;
}
