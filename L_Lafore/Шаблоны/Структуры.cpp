//Тренировочная программа, которая считает черерез сколько минут произошло событие после базаса
#include<iostream>
#include <stdlib.h>
#include <ctime>
struct timer
{
	int ed, raz;
};
enum boolean  {yes, no};
using namespace std;
int main()
{    
    setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	timer A,B;
	A.ed = rand() % 100;
	cout<<"Введите время B --> ";
	cin>>B.ed;
	if(A.ed>=B.ed)
		B.raz=yes;
	else
		B.raz=no;

	if(B.raz==yes)
		A.raz=A.ed-B.ed;
	else
	   A.raz=B.ed-A.ed;		
    
	cout<<"Разность "<<A.raz;
	cin.get();
	cin.get();
	return 0;
}