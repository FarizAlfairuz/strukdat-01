/* 
Nama	: Falah Rizqi Abdullah Fairuz
NPM		: 140810180069
Nama Program	: Fizz Buzz
tgl buat : 26 februari 2019
*/

#include<iostream>
using namespace std;

void fizzbuzz()
{
	for(int i=1; i<=100; i++)
	{
		if (i%3==0)
		{
			cout << " Fizz ";
		}
		if (i%5==0)
		{
			cout << " Buzz " << endl;
		}
		if (i%5!=0 && i%3!=0)
		{
			cout << " " << i << " ";
		}
	}
}

main()
{
	fizzbuzz();
}
