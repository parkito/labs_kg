// �������� � ������� �� ���������(����� ���������� � ��������� �������� ��� �� ��������) 
//� �� ������(���� ���������� � ������ �������� ��������)
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
//� �������  ����� ����������� ��������� � �������
// �� ����� � �������� � ���� �����, ���� � ���� ��� �������, �� ������ ���-�� ����������

// overload.cpp
// ���������� �������
#include <iostream>
using namespace std;
void repchar();              // ���������
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
// ������ repchar()
// ������� �� ����� 45 �������� '*'
void repchar()
{
  for(int j=0; j<45; j++)    // ����, ����������� 45 ���
  cout << '*';               // ����� ������� '*'
  cout << endl;
}
//--------------------------------------------------------
// ������ repchar()
// ������� 45 �������� ��������
void repchar(char ch)
{
  for(int j=0; j<45; j++)    // ����, ����������� 45 ���
  cout << ch;                // ����� ��������� �������
  cout << endl;
}
//--------------------------------------------------------
// ������ repchar()
// ������� �������� ������ �������� ����� ���
void repchar(char ch, int n)
{
  for(int j=0; j<n; j++)     // ����, ����������� n ���
  cout << ch;                // ����� ��������� �������
  cout << endl;
}
// retref.cpp
// ����������� �������� �� ������
#include <iostream>
using namespace std;
int x;                       // ���������� ����������
int& setx();                 // �������� �������
int main()
{                            // ������������ �������� x ���
  setx() = 92;               // ������ ������ ������� �����
  cout << "x=" << x << endl; // ����� ������ �������� x
  return 0;
}
//--------------------------------------------------------
int& setx()
{
  return x;                  // ���������� ��������, ������� ����� ��������
}


