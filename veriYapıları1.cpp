#include <iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

class Materyal
{	
	public:
		string materyalAd;
		string materyalTuru;
		string yazar;
		int yay�mTarihi;
		string cevirmen�smi;	
		int sonTeslimTarihi;
	
		
	void MateryalGir();
	void MateryalYazdir();
};

void Materyal::MateryalGir();
{
	cout.setf(ios::right);
	cout<<"Materyal Adi: ";
 	cin>>materyalAd;
 	cout<<"Materyal Turu Nedir: ";
 	cin>>materyalTuru;
 	cout<<"Sayfa Sayisi Kactir: ";
 	cin>>sayfaSayisi;
 	cout<<"Materyal Yazarinin Adi: ";
 	cin>>yazar;
 	cout<<"Materyal Yayim Tarihi: ";
 	cin>>yay�mTarihi;
 	cout<<"Materyal Cevirmen Adi: ";
 	cin>>cevirmen�smi;
 	cout<<"Son Teslim Tarihi :";
 	cin>>sonTeslimTarihi;
 	
}
&nbsp;
void Materyal::MateryalYazd�r()
{
 cout.setf(ios::right);
 cout<<"Adi: "<<materyalAd<<endl;
 cout<<"Materyal turu: "<<materyalTuru<<endl;
 cout<<"Sayfa sayisi: "<<sayfaSayisi<<endl;
 cout<<"Yazar Adi: "<<yazar<<endl;
 cout<<"yay�mTarihi: "<<yay�mTarihi<<endl;
 cout<<"Cevirmen Adi: "<<cevirmen�smi<<endl;
 cout<<"Son Teslim Tarihi: "<<sonTeslimTarihi<<endl;
 cout<<"**************************************"<<endl;
}
//End Class Materyal


