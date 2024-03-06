#include <iostream>
using namespace std;
int main()

{
	int x;
	
	cout <<"Digite um numero inteiro:"; cin >>x;
	if (((x%3)==0) and ((x%5)==0))
	{
		cout <<"===============================================" <<endl <<endl;
		cout <<"Este numero e divisivel por 3 e 5! Parabens! :)" <<endl;
	}
	else
	{
		cout <<"======================================================" <<endl <<endl;
		cout <<"Este numero nao e divisivel por 3 e 5! Lo Siento :(" <<endl;
	}
	return 0;
}
