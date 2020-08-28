#include <iostream>
#include <ctime>

using namespace std;

void Hanoi(int diskSayi,char kaynak,char ara,char hedef){
	if(diskSayi==1)
		cout<<"Diski "<<kaynak<<"kulesinden "<<hedef<<"kulesine tasi."<<endl;
	else{
		Hanoi(diskSayi-1,kaynak,hedef,ara);
		//a da bir tane kaldığında 
		Hanoi(1,kaynak,ara,hedef);
		Hanoi(diskSayi-1,ara,kaynak,hedef);
		} 
		
	}
int main(){
	int diskSayi;
	cout<<"Disk Sayi";
	cin>>diskSayi;
	Hanoi(diskSayi,'A','B','C');
	
	return 0;
}