#include <iostream>
using namespace std;
int main()
{
	int v1[5], v2[5];
	for(int i=0; i<5; i++){
		v1[i]=5-i;
		cout<<v1[i]<<endl;
	}
	for (int i=0; i<5;i++){
		v2[i]=v1[i];
		cout<<v2[i]<<endl;
	}
}
