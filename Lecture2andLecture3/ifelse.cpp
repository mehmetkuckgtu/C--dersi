/********************************
*kodu olusturan : Mehmet Kucuk
*kitabin 2 konusu olan flow of control deki konulari
*anlamaya yonelik kod yazilmisitir.
*************************************/
#include<iostream>

using namespace std;
int main()
{
	//kullanýmý c deki gibidir.
	int temperature=-33;
	char  day[]="SUNDAY";
	if ((temperature < -10) && (day == "SUNDAY"))
		cout << "Stay home.";
	else if (temperature < -10) //and day != SUNDAY
		cout << "Stay home, but call work.";
	else if (temperature <= 0) //and temperature >= -10
		cout << "Dress warm.";
	else //temperature > 0
		cout << "Work hard and play hard.";
		/*sayfa 61 15. soru 
		if((n<0) else if(n>=0 && n<=100) else if(n>100) )*/
	return 0;
}
/***********************************
*if kosulunun bir yazimida 
*if (n1 > n2)
*max = n1;
*else
*max = n2;
*This can be expressed using the conditional operator as follows:
*max = (n1 > n2) ? n1 : n2;
************************************/
