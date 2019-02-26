/*
Nama	: Hafidh Akhdan Najib
NPM		: 140810180061
Kelas	: A
Tanggal : 26 Februari 2019
Program Konversi
*/

using namespace std;

#include <iostream>

void convert(int& i){
	float h;
	h = i *1.8 + 32;
	cout<<h<<" F ";
	
}

int main (){
	int i;
	float h;
	cout<<"Input celcius : "; cin>>i;
	
	convert(i);
}
