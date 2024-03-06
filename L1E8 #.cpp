// L1E8.cpp
// Transforme o exercício 4, substituindo o comando while pelo for

#include <iostream> 
using namespace std;
const int vezes=2;
int main()
{
	int i, idade=0, totpessoas=0, totidade=0, totaltura=0, totpeso=0;
	float medaltura=0, altura=0, peso=0; 	
	for (i=0; i < vezes; i++)
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
			}	
	cout << "A quantidade de pessoas com idade superior a 50 anos e " << totidade << endl << endl;	
	cout << "A media das alturas das pessoas com idade entre 10 e 20 anos e " << medaltura / totaltura << endl << endl;	
	cout << "A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas " << totpeso / totpessoas * 100 << "%"<< endl;	
	return 0;
} // Fim de main()

