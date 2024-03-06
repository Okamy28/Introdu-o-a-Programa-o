#include <iostream>
using namespace std;
int main()

{
	int a, b;
	cout <<"Contagem de nuemros!" <<endl;
	
	cout <<"Insira o 1o numero: "; cin >>a;
	cout <<"Insira o 2o numero: "; cin >>b;
	
	if (a<=b)
	{
		while (a<=b)
		{
			cout <<a <<endl;
			a++;
		}
    }
	else
	{
		while (a>=b)
		{
			cout <<a <<endl;
			a--;
		}
	}
	return 0;
}
