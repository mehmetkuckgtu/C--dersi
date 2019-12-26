/********************************
*kodu olusturan : Mehmet Kucuk
*kitabin 2 konusu olan flow of control deki konulari
*anlamaya yonelik kod yazilmisitir.
*************************************/
#include <iostream>
using namespace std;
int main()
{
	/*
	for (Initialization_Action; Boolean_Expression; Update_Action)
		Body_Statement
	*/
	int sum = 0;
	for (int n = 1; n <= 10; n++)
	{	
			
			sum = sum + n;
	}
	cout<<sum;
	//break ile dongulerden cikariz.
	//continue ise if ten devam ederiz
	return 0;
}
