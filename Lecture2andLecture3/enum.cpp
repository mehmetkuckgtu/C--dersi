/********************************
*kodu olusturan : Mehmet Kucuk
*kitabin 2 konusu olan flow of control deki konulari
*anlamaya yonelik kod yazilmisitir.
*************************************/
#include<iostream>

using namespace std;
int main()
{
	//c deki gibidir.
	enum Direction { N, S, E, W };
	// ...3 2 1 0
	cout << W << " " << E << " " << S << " " << N << endl;
	enum DirectionOther { a = 5, s = 7, d = 66, f,t };
	// ...67 66 7 5 68 d densonra sira halinde devam etmistir.
	cout << f << " " << d << " " << s << " " << a << " "<< t<<endl;
	enum MyEnum { ONE = 17, TWO, THREE, FOUR = -3, FIVE };
	//...171819-3-2 sonradan degistire biliyoruz.
	cout << ONE<< TWO<<THREE<< FOUR << FIVE <<endl;
	

	return 0;
}
