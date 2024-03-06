#include<iostream>
using namespace std;
int main()
{
	float nota [20];
	string nome [20];
	int loop;
	
	for (loop=0; loop<20; loop++){
		cout<< "Digite o nome do " <<loop+1 <<"o aluno: "; cin>> nome [loop];
		cout<< "Digite a nota do " <<loop+1 <<"o aluno: "; cin>> nota [loop];
	}
	cout<< "\n-----------------------------------------------------------------\n";
	cout<< "Lista de notas dos alunos\n";
	cout<< "\n-----------------------------------------------------------------\n";
	for (loop=0; loop<20; loop++){
		cout<< "Nome: " << nome [loop] << " Nota: " << nota [loop] <<endl; 
	}
	return 0;
}
