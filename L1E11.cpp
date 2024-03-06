#include <iostream>
using namespace std;
int main()

{
	cout <<"Vendas a Vista e a Prazo\n";
	cout <<"========================\n" <<endl;
	
	int i=1;
	string f;
	float v=0, p=0;
	
	while (i<=4)
	{
		cout <<"Insira a forma de Pagamento da " <<i <<"a pessoa ('v' para Vista e 'p' para Prazo)!\n";
	    
	    if (f!="a")
	    {
	    	f=="a";
		}
	    while ((f!="v") and (f!="V") and (f!="p") and (f!="P"))
	    {
	    	cout <<"Forma de pagamento: "; 
		    cin >>f; 
		    cout <<endl;
	    }
	    if ((f=="v") or (f=="V"))
        {
		    cout <<"Pagamento a Vista\n";
		    cout <<"=================\n";
		    cout <<"Insira o valor do pagamento: "; 
			cin >>v;
			cout <<endl; 
			cout <<"O pagamento foi feito a vista, no valor de R$" <<v <<endl; 
			cout <<"====================================================" <<endl;
	    }
	    else 
		{
			    
			if ((f=="p") or (f=="P"))
			{
	            cout <<"Pagamento a Prazo\n";
	            cout <<"=================\n";
	            cout <<"Insira o valor do pagamento: "; 
		        cin >>p;
			    cout <<endl; 
			    cout <<"O pagamento foi feito a prazo, no valor de R$" <<p <<endl;
			    cout <<"====================================================" <<endl;
			}
	    }
	    i++;
    }
	
	cout <<"sucesso";

}
