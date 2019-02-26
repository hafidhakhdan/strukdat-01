/*
Nama	: Hafidh Akhdan Najib
NPM		: 140810180061
Kelas	: A
Tanggal : 26 Februari 2019
Program Fizz Buzz
*/

using namespace std;

#include <iostream>

void swap(float&a , float&b ){
	float c=a;
	a=b;
	b=c;
}

int main (){
	float a,b;
	
	cout<<"Input nilai A : "; cin>>a;
	cout<<"Input nilai B : "; cin>>b;
	
	swap(a,b);
	
	cout<<"Nilai a = "<<a;
	cout<<"\n Nilai b = "<<b;
}
