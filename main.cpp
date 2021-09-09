///tempo, taxa, montante
#include <iostream>
using namespace std;
int main ()
{
float t, i,tmp, m, tx;
int c;
cout<<"Entre com a quantidade de tempo use ponto, em vez da virgula:\t "<<endl;
cout<<"\nEx: 2 anos e meio = 2.5 "<<endl;
cout<<"\no tempo eh:"<<endl;
cin>>t;

tmp=(12*t);

cout<<"valor da taxa:\t"<<endl;
cin>>i;

tx=(i)/100;

cout<<"valor do montante:\t"<<endl;
cin>>m;

c= (m/(1 + tmp*tx))+1;
cout<<"o valor eh \t"<<c<<endl;
}
