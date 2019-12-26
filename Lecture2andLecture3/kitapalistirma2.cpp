/********************************
*kodu olusturan : Mehmet Kucuk
*kitabin 2 konusu olan flow of control deki konulari
*anlamaya yonelik kod yazilmisitir.
*************************************/
#include<iostream>

using namespace std;

int main()
{
	//sayfa 53
	int count=0,limit=10,x=11,y=12;
	bool bir,iki,uc,dort,bes,alti,yedi,sekiz,dokuz,on,onbir,oniki;
	bir=(count == 0) && (limit < 20);
	cout<<"1="<<bir<<endl;
	iki=count == 0 && limit < 20;
	cout<<"2="<<iki<<endl;
	uc=(limit > 20) || (count < 5);
	cout<<"3="<<uc<<endl;
	dort=(!(count == 12));
	cout<<"4="<<dort<<endl;
	bes=(count == 1) && (x < y);
	cout<<"5="<<bes<<endl;
    alti=(count < 10) || (x < y);
    cout<<"6="<<alti<<endl;
	yedi=!( ((count < 10) || (x < y)) && (count >= 0) );
	cout<<"7="<<yedi<<endl;
	//yorum satirina alinanlar bolumun tanimsiz gelmesinden kaynaklidir.
	//sekiz=(((limit/count) > 7) || (limit < 20));
	//cout<<"8="<<sekiz<<endl;
	//
	//soldan bakildigi icin tanimsiz ogeye rastlamadi.
	dokuz=(limit < 20) || ((limit/count) > 7);
	cout<<"9="<<dokuz<<endl;
	//on=((limit/count) > 7) && (limit < 0);
	//cout<<"10="<<on<<endl;
	//
	//soldan bakildigi icin tanimsiz ogeye rastlamadi.
	onbir=(limit < 0) && ((limit/count) > 7);
	cout<<"11="<<onbir<<endl;
	oniki=(5 && 7) + (!6);
	cout<<"12="<<oniki<<endl;
	
	
	return 0;
}
