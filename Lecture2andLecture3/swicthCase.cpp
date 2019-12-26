/********************************
*kodu olusturan : Mehmet Kucuk
*kitabin 2 konusu olan flow of control deki konulari
*anlamaya yonelik kod yazilmisitir.
*************************************/
#include<iostream>

using namespace std;
int main()
{
	int vehicleClass;
	double toll;
	cout << "Enter vehicle class: ";
	cin >> vehicleClass;
	//if in baska bir turlu hali kosula gore islemi yapiyor.
	switch (vehicleClass)
	{
		case 1:
			cout << "Passenger car.";
			toll = 0.50;
		break;
		case 2:
			cout << "Bus.";
			toll = 1.50;
		break;
		case 3:
			cout << "Truck.";
			toll = 2.00;
		break;
		default:
			cout << "Unknown vehicle class!";
		break;
		
		}
	return 0;
}
