#include<iostream>
using namespace std;
int main()
{    
    setlocale(LC_ALL, "Rus");
	int a ;
	double b = 5.5;
	a=static_cast<int>(b); //Указать в какой тип перевожу
	cout<<a;
	cin.get();
	cin.get();
	return 0;
	}