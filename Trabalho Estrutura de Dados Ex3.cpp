#include <iostream>
using namespace std;
int soma (int a, int b);
int main(){
     int x, y, s;
     x = 3;
     y = 5;
     s = soma(x,y);
     cout<<"Soma das variaveis x e y: "<<s <<endl;
     return 0;
}
int soma (int a, int b){
     return a+b;
}
