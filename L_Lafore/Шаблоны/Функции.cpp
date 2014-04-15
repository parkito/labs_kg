// Передача в функцию по значениею(копия переменных в остальных функциях они не меняются) 
//и по ссылке(сами переменные в других функциях меняются)
#include<iostream>
void znach(int);
void ssilka(int&);
using namespace std;
int main()
{    
    setlocale(LC_ALL, "Rus");
	int a = 5, b=6;
	cout<<"a "<<a<<" b "<<b<<endl;
	znach(a);
	ssilka(b);
	cout<<"a "<<a<<" b "<<b;
	cin.get();
	cin.get();
	return 0;
}
void znach(int a)
{ a++;}
void ssilka(int& b)
{b++;}
//В функцию  могут передаватся структуры и массивы
// Не стоит и забывать о след штуке, одно и тоже имя функции, но разное кол-во аргументов

// overload.cpp
// перегрузка функций
#include <iostream>
using namespace std;
void repchar();              // прототипы
void repchar(char);
void repchar(char, int);
int main()
{
  repchar();
  repchar('=');
  repchar('+', 30);
  return 0;
}
//--------------------------------------------------------
// функци¤ repchar()
// выводит на экран 45 символов '*'
void repchar()
{
  for(int j=0; j<45; j++)    // цикл, выполн¤ющийс¤ 45 раз
  cout << '*';               // вывод символа '*'
  cout << endl;
}
//--------------------------------------------------------
// функци¤ repchar()
// выводит 45 заданных символов
void repchar(char ch)
{
  for(int j=0; j<45; j++)    // цикл, выполн¤ющийс¤ 45 раз
  cout << ch;                // вывод заданного символа
  cout << endl;
}
//--------------------------------------------------------
// функци¤ repchar()
// выводит заданный символ заданное число раз
void repchar(char ch, int n)
{
  for(int j=0; j<n; j++)     // цикл, выполн¤ющийс¤ n раз
  cout << ch;                // вывод заданного символа
  cout << endl;
}
// retref.cpp
// возвращение значения по ссылке
#include <iostream>
using namespace std;
int x;                       // глобальная переменная
int& setx();                 // прототип функции
int main()
{                            // присваивание значения x при
  setx() = 92;               // помощи вызова функции слева
  cout << "x=" << x << endl; // вывод нового значения x
  return 0;
}
//--------------------------------------------------------
int& setx()
{
  return x;                  // возвращает значение, которое будет изменено
}


