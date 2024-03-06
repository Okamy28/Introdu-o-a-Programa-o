#include <iostream>
using namespace std;
int main()
{
	float a=0, b=0;
	string loop="s";
	
	cout<< "---Regras da Calculadora--- \n" <<endl;
	
	cout<< "Para somar, utilize (+)\n";
	cout<< "Para subtrair utilize (-)\n";
	cout<< "Para multiplicar utilize (x)\n";
	cout<< "Para dividir,  utilize (/)\n";
	cout<< "Para responder com 'sim', utilize (s)\n";
	cout<< "Para responder com 'nao', utilize (n)\n" <<endl;
	
	while (loop=="s"){
		string oper="0";
		cout<< "---------------------------------------------------------\n";
		while ((oper!="+") and (oper!="-") and (oper!="x") and (oper!="/")){
			cout<< "De acordo com as regras acima, insira o operador desejado: ";
			cin>> oper;
		}
		string loop="n";
		while (loop=="n"){
			cout<< "---------------------------------------------------------\n";
			cout<< "Insira o 1o valor numerico da operacao: "; cin>> a;
			cout<< "Insira o 2o valor numerico da operacao: "; cin>> b;	
					
			cout<< "Os numeros escolhidos sao, respectivamente " <<a <<" e " <<b <<endl;
			cout<< "OS numeros escolhidos estao certos? "; cin>>loop;
		}
		cout<< "---------------------------------------------------------\n";
			
		if (oper=="+"){
			cout<< "A soma de " <<a <<" e " <<b <<" da: " <<a+b <<endl;
		}
		else if (oper =="-"){
			cout<< "A subtracao de " <<a <<" e " <<b <<" da: " <<a-b <<endl;
		}
		else if (oper=="x"){
			cout<< "A multiplicacao de " <<a <<" e " <<b <<" da: " <<a*b <<endl;
		}
		else if (oper=="/"){
			cout<< "A divisao de " <<a <<" e " <<b <<" da: " <<a/b <<endl;
		}
		cout<< "---------------------------------------------------------\n";
		
		cout<< "Deseja fazer outra operacao? "; cin>> loop;
	} 
	cout<< "---------------------------------------------------------\n";
	cout<< "Obrigado por utilizar nossos servicos!";
	return 0;
}
