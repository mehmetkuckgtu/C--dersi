#include <iostream>// c de stdio kütüphanesini kullaniyoruz.

using namespace std;

int main(int argc, char** argv) 
//exe dosyasý için kod yine main de yazýlýyor.
{
	int numberOflanguage; //tanimlama 
	cout<<"hello readder\n"<<"welcome to C++ \n";//printf gibi ama burada obje kullanýyoruz.
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
