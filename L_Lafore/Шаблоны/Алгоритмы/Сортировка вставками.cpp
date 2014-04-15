//Соритировка вставками 
#include<iostream>
#include <string>
using namespace std;

void insertion_sort(char s[], int n)
        {
			int i,j;
            for(i=1;i<n;i++)
             {j=i;
              while( (j>0)&&(s[j]<s[j-1]) )
                { swap(s[j],s[j-1]);
			       j=j-1;
                }
              }
          }
int main()
{ 
const int n = 10;
int g;
char s[n]={4,54,5,4,54,5,4,5,6,6};
    setlocale(LC_ALL, "Rus");
	insertion_sort(s,n);
	for(int j=0;j<n;j++)
		{
		g=s[j];
	    cout<<g<<endl;
	    }
	cin.get();
	cin.get();
	return 0;
	}