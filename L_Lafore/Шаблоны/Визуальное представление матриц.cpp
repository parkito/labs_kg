//Визуализирование матриц
#include<iostream>
using namespace std;
int main()
{    int a[10][10],h=1000;
for(int j=0;j<20;j++)
	{  for(int i=0;i<10;i++)
		  {
        a[j][i]=h;
		cout<<a[j][i]<<"   ";
		h--;
          }
cout<<endl;
     
    }
	
	cin.get();
	cin.get();
	return 0;
	}

// Первые скобки отвечают за строки, вторые за столбцы.