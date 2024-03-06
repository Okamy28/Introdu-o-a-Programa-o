#include <iostream>
using namespace std;
int main()

{
	int a, b, c, d;
	cout <<"Soma de 3 menores numeros!" <<endl;
	cout <<"Insira o 1o de 4 numeros: "; cin >>a;
	cout <<"Insira o 2o de 4 numeros: "; cin >>b;
	cout <<"Insira o 3o de 4 numeros: "; cin >>c;
	cout <<"Insira o 4o de 4 numeros: "; cin >>d;
	
	if ((a>=b) and (a>=c) and (a>=d))
	{
		cout <<"====================================================" <<endl;
		cout <<"A soma dos tres menores numeros e igual a: " <<b+c+d;
	}
	else
	{
		if ((b>=a) and (b>=c) and (b>=d))
		{
			cout <<"====================================================" <<endl;
		    cout <<"A soma dos tres menores numeros e igual a: " <<a+c+d;
		}
		else
		{
			if ((c>=a) and (c>=b) and (c>=d))
			{
				cout <<"====================================================" <<endl;
	     	    cout <<"A soma dos tres menores numeros e igual a: " <<a+b+d;
			}
			else
			{
				if ((d>=a) and (d>=b) and (d>=c))
				{
					cout <<"====================================================" <<endl;
	             	cout <<"A soma dos tres menores numeros e igual a: " <<a+b+c;
				}
			}
		}
	}
	return 0;
}
