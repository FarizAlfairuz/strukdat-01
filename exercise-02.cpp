/*
Nama			: Falah Rizqi Abdullah Fairuz
NPM				: 140810180069
Nama Program	: Convert Celcius to Fahrenheit
Tanggal Buat 	: 26 Februari 2019
*/

#include<iostream>
using namespace std;

float converter (float& suhu) //convert celcius to fahrenheit
{
	float fahrenheit;
	fahrenheit = (suhu*9/5)+32;
	return fahrenheit;
}

main()
{
	float temp;
	cout << "Masukkan suhu (celcius) : "; cin >> temp;
	cout << "Celcius ke Fahrenheit : "<<converter(temp);
}
