/********************************
*kodu olusturan : Mehmet Kucuk
*kitabin 2 konusu olan flow of control deki konulari
*anlamaya yonelik kod yazilmisitir.
*************************************/
#include<iostream>

using namespace std;
int main()
{
	/*5 cesit dongu tipi vardir: 
	Counting loop  				while, for		
	Sentinel-controlled loop 	while, for
	Endfile-controlled loop		while, for
	Input validation loop		do-while
	General conditional loop	while, for
	
	
	Initialization_Action;
	while (Boolean_Expression)
	{
		Body_Statement
		Update_Action;
	}
	*/
	//c++ while kullanýmý
	int countDown;
	cout << "How many greetings do you want? ";
	cin >> countDown; 
	while (countDown > 0)
	{
		cout << "Hello ";
		countDown = countDown - 1;
	}
	cout << endl;
	cout << "That’s all!\n";
	return 0;
}

