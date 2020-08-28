#ifndef SAYI_HPP
#define SAYI_HPP

#include "Stack.hpp"

class Sayi{
	private:
		int deger;
		int taban;
		string donusturulen;
		string TabanDonustur();
		
	public:
		Sayi();
		int Taban10Deger()const;
		friend ostream& operator<<(ostream&, Sayi&);//ekrana yazdrmak icin fonk
		friend istream& operator>>(istream&, Sayi&);//sayi icin fonk
};
#endif