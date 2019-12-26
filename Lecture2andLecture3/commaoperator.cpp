/********************************
*kodu olusturan : Mehmet Kucuk
*kitabin 2 konusu olan flow of control deki konulari
*anlamaya yonelik kod yazilmisitir.
*************************************/
#include <iostream>
using namespace std;
int main( )
{	
	int result,first,second,third;
	//comma operatorunde soldan saga dogru islem yapar ve saðdaki en son cikan deger basilir.
	result = (first = 2, second = first + 1);
	cout<<result<<endl;//3
	result = ((first = 2, second = first + 1), third = second + 1);
	cout<<result<<endl;//4
	return 0;
}
