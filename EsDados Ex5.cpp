#include <iostream>
using namespace std;
int main()
{
	int v1[5], v2[5], vF[10];
	
	for(int i=0; i<5; i++){
		v1[i]=i+1;
	}
	for (int i=0; i<5;i++){
		v2[i]=i+6;
	}
	for (int i=0; i<5; i++){
		vF[i]=v1[i];
		cout<<vF[i]<<endl;
	}
	for (int i=0; i<5; i++){
		vF[5+i]=v2[i];
		cout<<vF[5+i]<<endl;
	}
}
