/*******************************
* Kodu yazan: mehmet k���k
*kitaptaki 3 basic function
*konusuna bak�lm��t�r. 
*pointersiz C dilindeki fonksiyon kurallar� ge�erlidir.
*fonsiyonu tan�ml�yoruz.
***not: void bitiminde return; �evir.
*******************************/
#include <iostream>
using namespace std;
char mystery(int firstParameter, int secondParameter);
int main( )
{
	cout << mystery(10, 9) << "ow\n";
	return 0;
}
char mystery(int firstParameter, int secondParameter)
{
	if (firstParameter >= secondParameter)
		return 'W';
	else
		return 'H';
}
