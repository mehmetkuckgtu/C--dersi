#include <iostream>// c de stdio k�t�phanesini kullaniyoruz.

using namespace std;

int main(int argc, char** argv) 
//exe dosyas� i�in kod yine main de yaz�l�yor.
{
	int numberOflanguage; //tanimlama 
	cout<<"hello readder\n"<<"welcome to C++ \n";//printf gibi ama burada obje kullan�yoruz.
	cout<<"how many programming languages have you used?"<<endl;
	cin>>numberOflanguage;
	if(numberOflanguage<1)//if kosuluda c de ki gibi
	{
		cout<<"Read the preface. you may prefer\n"<<"a more elemantary book by same author";
	}else
	{
		cout<<"Enjoy the book";
	}
	return 0;
}
