#include <iostream>
#include <ctime>

using namespace std;

int FibDongu(int n){ // özyinelemesiz
	int once=0,simdi=1;
	if (n==0) return 0;
	if (n==1) return 1;
	for(int i=2;i<=n;i++){
		int yeni= once+simdi;
		once=simdi;
		simdi=yeni;
	}
	return simdi;
}
int Fib(int n){
	if (n==0) return 0;
	if (n==1) return 1;
	return Fib(n-1)+ Fib(n-2);
}
int main(){
	int n;
	cout<<"n:";
	cin>>n;
	cout<<"fib(n):"<<FibDongu(n)<<endl;
	cout<<"Oz yinelemeli fib(n):"<<Fib(n)<<endl;
	return 0;
}