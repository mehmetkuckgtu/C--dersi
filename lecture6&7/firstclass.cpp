#include<iostream>
using namespace std;

//class oluþturmak  burasý header da olacak kisim
// int ne ise classta benzeri    
class DayOfYear
{
	public:
	void output( );//member function
	int month;// parametre
	int day;
};
int main()
{
	DayOfYear today, birthday; //CLASS yapisi obje olusturmak 
	cout << "Enter today’s date:\n";
	cout << "Enter month as a number: ";	
	cin >> today.month;// objenin özelliklerini girildi.
	//. operatoru ile class elemanlarina ulasilir
	cout << "Enter the day of the month: ";
	cin >> today.day;
	cout << "Enter your birthday:\n";
	cout << "Enter month as a number: ";
	cin >> birthday.month;
	cout << "Enter the day of the month: ";
	cin >> birthday.day;
	cout << "Today’s date is ";
	today.output( );//objenin icindeki fonksiyonu cagýrma yeri 
	cout << endl;
	cout << "Your birthday is ";
	birthday.output( );
	cout << endl;
	if (today.month == birthday.month && today.day == birthday.day)
		cout << "Happy Birthday!\n";
	else 	
		cout << "Happy Unbirthday!\n";
	return 0;
}
//classýn fonksiyonu olusturma member fuction
/*
xxx.cpp de olacak kisim 
Returned_Type Class_Name::Function_Name(Parameter_List)
{
Function_Body_Statements
}
*/ 

void DayOfYear::output( )
{
	//month objenin degerinden geliyor call by referans yapamadan cagiriliyor
	//yani objeyi olusturuncu icindeki parametreleri birdaha o fonksiyona eklemiyorsun
	switch (month)
	{
		case 1:
			cout << "January "; break;
		case 2:
			cout << "February "; break;
		case 3:
			cout << "March "; break;
		case 4:
			cout << "April "; break;
		case 5:
			cout << "May "; break;
		case 6:
			cout << "June "; break;	
		case 7:
			cout << "July "; break;
		case 8:
			cout << "August "; break;
		case 9:
			cout << "September "; break;
		case 10:
			cout << "October "; break;
		case 11:
			cout << "November "; break;
		case 12:
			cout << "December "; break;
		default:
			cout << "Error in DayOfYear::output. Contact software vendor.";
	}

	cout << day;
}
