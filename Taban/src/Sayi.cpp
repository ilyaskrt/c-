#include "Sayi.hpp"

	string Sayi::TabanDonustur(){
		int sayi=deger;
		string rakamlar= "0123456789QABCDEF";
		string yeniSayi="";
		Stack<int> *yigit = new Stack<int>();
		
		while(sayi>0){
			int kalan = sayi%taban;
			yigit->push(kalan);
			sayi = sayi/taban;
		}
		while(!yigit->isEmpty()){
			yeniSayi += rakamlar[yigit->top()];
			yigit->pop();
		}
		delete yigit;
		return yeniSayi;
	}
	Sayi::Sayi(){
		cin>>*this;
		donusturulen = TabanDonustur();
	 }
	int Sayi::Taban10Deger()const{
		return deger;
	}
	ostream& operator<<(ostream& scr, Sayi& sag){//ekrana yazdrmak icin fonk
		scr<<"("<<sag.deger<<")10="<<"("<<sag.donusturulen<<")"<<sag.taban;
		scr<<endl;
		return scr; 
	}
	istream& operator>>(istream& in, Sayi& sag){
		cout<<"Sayi:";
		in>>sag.deger;
		cout<<"Taban:";
		in>>sag.taban;
		return in;
	}