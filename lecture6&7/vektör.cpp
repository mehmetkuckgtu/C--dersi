/*****************************************
*Kodu olusturan: Mehmet kucuk
* vektor alistirma kodlari
*****************************************/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//vektoru tanimlama 
	vector<int> firsVector;
	//vektore boyut tanimlamada eklenebilir.
	vector<int> secondVector(10);
	//size fonksiyonu ile boyunu ogrenebilinir.
	cout<<"ikinci vektor boyut="<<secondVector.size()<<endl;
	//eger diziye boyutnu tanýmlamis isen elman ekleme dizlerdeki gibi eklenimiyor
	//yani boyutu tanimli degil ise  firsVector[0]=55; gibi atama yapilamiyor.
	//eleman ekleme push_back ile yapiliyor.
	firsVector.push_back(44);
	firsVector.push_back(33);
	cout<<"birinci vektor boyut="<<firsVector.size()<<endl;
	cout<<"birinci vektor 2. eleman="<<firsVector[1]<<endl;
	//boyut tanimlanmis vektore boyutu buyutulebiliyor.
	secondVector.push_back(22);
	cout<<"ikinci vektor boyut="<<secondVector.size()<<endl;
	cout<<"sonradan eklenen boyut 11. elaman degeri="<<secondVector[10]<<endl;
	//boyutu onceden tanimli ise diziye eleman ataya bilirim.
	secondVector[3]=55;
	cout<<"boyutu onceden taimlanmis vektor eleman atama ikici vektor 4. eleman=" <<secondVector[3]<<endl;
	//yeniden boyutlandirmak icin 	"firsVector(40);" denemeyin onun yerine
	firsVector.resize(55);
	cout<<"firstVektorun size artilirlidi="<<firsVector.size()<<endl;
	return 0;
}
