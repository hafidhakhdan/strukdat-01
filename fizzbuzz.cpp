/*
Nama	: Hafidh Akhdan Najib
NPM		: 140810180061
Kelas	: A
Tanggal : 26 Februari 2019
Program Fizz Buzz
*/

using namespace std;

#include <iostream>

void fizzbuzz (){
	int i=1;

	for (i=1 ; i<=100 ; i++){
	
		if (i%3 == 0){
			cout<<"Fizz";
			if (i%5 ==0){
				cout<<"Buzz";
			}
		} else if (i%5 == 0){
			cout<<"Buzz";
		} else cout<<i;
		cout<<endl;
	}
}

int main (){
	int i;
	fizzbuzz();
	
	return 0;
}
