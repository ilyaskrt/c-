#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
using namespace std;
//son giren ilk cikar stack in mantigi bu
template<typename Object>
class Stack{
	private:
		Object *items;
		int topOfStack; //son dügümün konumu tutmak için
		int length;
		int capacity; //dizi ama yığıt gibi davranicak
		
		void reserve(int newCapacity){
			Object * tmp= new Object[newCapacity];
			for(int i=0;i<length;i++)
				tmp[i]=items[i];
			delete [] items;
			items=tmp;
			capacity=newCapacity;
		}
	public:
		Stack(){
			capacity=100;
			items =new Object[capacity];
			topOfStack=-1;
			length=0;
		}
		bool isEmpty()const{
			return topOfStack == -1;
		}
		void push(const Object& item){
			if(length == capacity) reserve(2*capacity);
			//dolu olduğunda 2 katı kadar yeni dizi oluşturuyor
			topOfStack++;
			items[topOfStack]=item;
			length++;
		}
		const Object& top()const{
			//if(isEmpty()) hata
			return items[topOfStack];
			//çıkmak üzere olan elemanı gösteriyor
		}
		void pop(){
			//if(isEmpty()) hata
			topOfStack--; // son elemani cikarmis olduk yeni eklendiginde üstüne yazmis olucak
			length--;
		}
		void makeEmpty(){
			topOfStack=-1;
			length=0;
		}
		~Stack(){
			delete [] items; //olusturulan diziyi yok ettik  
		}
		  
};
#endif