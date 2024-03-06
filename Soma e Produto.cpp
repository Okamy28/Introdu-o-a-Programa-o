#include <iostream>
using namespace std;

void soma (int a, int b);
void produto (int a, int b);

int main(){
	int x, y;
	x=5, y=6;
	soma (x,y);
	produto (x,y);
	
}

void soma (int a, int b){
	cout<<"Procedimento da soma: "<<a+b<<endl;
}

void produto (int a, int b){
	cout<<"Procedimento do produto: "<<a*b<<endl;
}
