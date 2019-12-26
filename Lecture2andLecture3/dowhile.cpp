/********************************
*kodu olusturan : Mehmet Kucuk
*kitabin 2 konusu olan flow of control deki konulari
*anlamaya yonelik kod yazilmisitir.
*************************************/
#include <iostream>
using namespace std;
int main( )
{
	//dowhile kullanimi sorgusuz sualsiz donguyu bir defa yapar.	
	int countDown;
	cout << "How many greetings do you want? ";
	cin >> countDown;
	
	do
	{
		cout << "Hello ";
		countDown = countDown - 1;
	}while (countDown > 0);
	cout << endl;
	cout << "That’s all!\n";
	return 0;
}
