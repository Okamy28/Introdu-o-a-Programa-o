#include <iostream>
using namespace std;
int main()
{
	int valor[5];
	for (int i=0; i<6;i++){
		valor[i]=0;
	}
	cout<<"Insira valor aqui: "; cin>> valor[1];
	
	for (int i=0; i<6;i++){
		cout<<valor[i];
    }
	return 0;
}
