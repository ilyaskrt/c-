#include <iostream>
#include <ctime>

using namespace std;

bool ikiliArama(int sayilar[],int bas,int bitis,int aranan){
	int ortaindis=(bas+bitis)/2;
	if(bitis<bas) return false;
	if(sayilar[ortaindis]==aranan) return true;
	
	if(aranan<sayilar[ortaindis])
		return ikiliArama(sayilar,bas,ortaindis-1,aranan);
	else
		return ikiliArama(sayilar,ortaindis+1,bitis,aranan);
}
int main(){
	int dizi[]={3,5,18,63,87,90,112,218,305};
	int x;
	cout<<"Aranan:";
	cin>>x;
	if(ikiliArama(dizi,0,8,x)) cout<<"Sayi var";
	else cout<<"Sayi yok";	
	return 0;
}
