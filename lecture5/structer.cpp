#include<iostream>
using namespace std;
//structur yapi tanimlanmasi
//C++ type defsiz yapiliyor. asagiya yazilan yeni tip struct yanina yaziliyor.
struct CDAccountV1
{
	double balance;
	double interestRate;
	int term;//months until maturity
};//noktali virgulu unutma

/******************************************************
struct WeatherData
{
double temperature;
double windVelocity;
} dataPoint1, dataPoint2;
bu yazim sekilnde WeatherData tipinde iki degisken olusturuldu.
************************************************/
//C dilindeki gibi structer icinde structer structer olusturulabilir.

//call by  referans olarak çagirilmasi 
void getData(CDAccountV1& theAccount);

/**************************
//C dilindeki gibi olusturulan structur tipinde fonsiyondan o tipdeki degisken  return edebilir.
örnek:
CDAccountV1 doubleInterest(CDAccountV1 oldAccount)
{
CDAccountV1 temp;
temp = oldAccount;
temp.interestRate = 2*oldAccount.interestRate;
return temp;
}
*****************************/ 
/************************************************
//CDAccountV1 declera yaptik initialize yapmak ise
CDAccountV1 mehmet={22.0,11.0,2}; 
olarak yapilabilir.
**************************************************/
int main()
{
	//CDAccountV1 tipindeki degisken olusturma.
	CDAccountV1 account;
	//call by referans olarak tanýmlama
	getData(account);
	// algoritmaya gore hesaplama 
	double rateFraction, interest;
	rateFraction = account.interestRate/100.0;
	interest = account.balance*(rateFraction*(account.term/12.0));
	account.balance = account.balance + interest;
	cout << "When your CD matures in "
	<< account.term << " months,\n"
	<< "it will have a balance of $"
	<< account.balance << endl;
	
	
	
	return 0;	
}
//degisken deger degistirme
void getData(CDAccountV1& theAccount)
{
	//structer degerlerinin icine ulasip degistirdik
	cout << "Enter account balance: $";
	cin >> theAccount.balance;
	cout << "Enter account interest rate: ";
	cin >> theAccount.interestRate;
	cout << "Enter the number of months until maturity: ";
	cin >> theAccount.term;
}
