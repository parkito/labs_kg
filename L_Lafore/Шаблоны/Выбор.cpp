#include <iostream>
using namespace std;

int main()
    {setlocale(LC_ALL,"Rus");
     int a,b;
	 char c;
	 do
	 {
    cout<<"Ввод ";
	cin>>a>>c>>b;
	switch(c)
	{ case '+': a+=b; break;
	  case '-': a-=b; break;
	  case '*': a*=b; break;
	  case '/': a/=b; break;
	  default: cout<<"Попробуй еще раз "<<endl;
	}
	cout<<"Результат "<<a<<endl<<"Еще раз? (y/n) --> ";
	cin>>c;
	 } while (c=='y');

	cin.get();
	cin.get();
    return 0;
    }