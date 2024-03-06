// L1E4.cpp
// Faça um programa que leia a idade, altura e peso de 25 pessoas, calcule e mostre:
//      1.	A quantidade de pessoas com idade superior a 50 anos
//      2.	A média das alturas das pessoas com idade entre 10 e 20 anos
//      3.	A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas

#include <iostream> 
using namespace std;
const int vezes=2;
int main()
{
	int i, idade=0, totpessoas=0, totidade=0, totaltura=0, totpeso=0;
	float medaltura=0, altura=0, peso=0; 
	i=0;	
	while (i < vezes)
			{
				cout << "Digite o peso   da " << i+1 << "a pessoa: "; cin >> peso; cout << endl;
				cout << "Digite a idade  da " << i+1 << "a pessoa: "; cin >> idade; cout << endl;
	            cout << "Digite a altura da " << i+1 << "a pessoa: "; cin >> altura; cout << endl;
	            totpessoas++;
				if (idade>50) {
	            	totidade++;
				}
				if ((idade>=10) && (idade<=20)) {
					medaltura=medaltura+altura;
					totaltura++;
				}
				if (peso<40.0) {
					totpeso++;
				}
				i++;
			}	
	cout << "A quantidade de pessoas com idade superior a 50 anos e " << totidade << endl << endl;	
	cout << "A media das alturas das pessoas com idade entre 10 e 20 anos e " << medaltura / totaltura << endl << endl;	
	cout << "A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas " << totpeso / totpessoas * 100 << "%"<< endl;	
	return 0;
} // Fim de main()

