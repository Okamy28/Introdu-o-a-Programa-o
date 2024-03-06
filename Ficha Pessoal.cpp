#include<iostream>
using namespace std;
int main()
{
	string nick, lnick, age, fnick, mnick, sch, adr;
	cout <<"Ficha Pessoal" <<endl;
	cout <<"Seu nome:" <<endl;
	cin >>nick;
	cout <<"Seu sobrenome:" <<endl;
	cin >>lnick;
	cout << "Sua idade (por extenso):" <<endl;
	cin >>age;
	cout <<"Nome do pai:" <<endl;
	cin >>fnick;
	cout <<"Nome da mãe:" <<endl;
	cin >>mnick;
	cout << "Escolaridade:" <<endl;
	cin >>sch;
	cout <<"Endereço:" <<endl;
	cin >>adr;
	
	cout <<"Sua ficha está pronta:" <<endl;
	cout <<endl;
	cout <<"Nome: " <<nick <<" " <<lnick <<endl;
	cout <<"Idade: " <<age <<endl;
	cout <<"Nome do pai: " <<fnick <<endl;
	cout <<"Nome da mae: " <<mnick <<endl;
	cout <<"Escolaridade: " <<sch <<endl;
	cout <<"Endereço: " <<adr <<endl;
	return 0;
}
