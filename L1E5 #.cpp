// L1E3.cpp
// Uma loja utilizou o c�digo V para transa��es � vista e P para transa��es � prazo. 
// Fa�a um programa que leia o c�digo e o valor de 15 transa��es, calcule e mostre:
//   1.	O valor total das compras � vista
//   2.	O valor total das compras � prazo
//   3.	O valor total das compras efetuadas

#include <iostream> 
using namespace std;
const int vezes=4;
int main()
{
	int i=1;
	string codigo="X";
	float valor=0, totavista=0, totaprazo=0;
	cout << "Codigo da mercadoria: V = a vista e P = a parzo" << endl << endl;
	while (i <= vezes)
			{
				cout << "Digite o codigo da mercadoria da " << i << "a transacao: "; 
				while (codigo != "V" and codigo != "v" and codigo != "P" and codigo != "p")
					cin >> codigo;
				cout << endl << "Digite a valor da mercadoria  da " << i << "a transacao: "; cin >> valor; cout << endl;
				if (codigo == "V" or codigo == "v" ) {
	            	totavista=totavista+valor;
				}
				else {
					totaprazo=totaprazo+valor;
				}
				i++; codigo="X";
			}	
	cout << "O valor total das compras � vista e " << totavista << endl;	
	cout << "O valor total das compras � prazo e " << totaprazo << endl;	
	cout << "O valor total das compras efetuadas e " << totavista + totaprazo << endl;	
	return 0;
} // Fim de main()

