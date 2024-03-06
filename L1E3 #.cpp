// L1E3.cpp
// Faça um programa que leia 2 número e mostre os números do intervalo entre eles.
#include <iostream> 
using namespace std;
int main()
{
	int num1, num2 = 0; 
	
	cout << "Digite 1o numero: "; cin >> num1;
	cout << "Digite 2o numero: "; cin >> num2;
	
	while (num1 < num2-1)
			{
				num1++;
				cout << num1 << ", ";
			}	
		
	return 0;
} // Fim de main()

