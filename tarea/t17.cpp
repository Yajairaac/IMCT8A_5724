#include <iostream>
using namespace std;

int x=0, y=0, sum=0;

void registro (){
    cin>>x;
return;
}

void ciclo (){
    for (int i=0; i<10; i++)
    {
        registro();
        if (x>y)
        {
            y=x;
            sum = y+sum;
        }
        else
        {
            cout<<"Esta suma no se puede porque los números ingresados no estan ordenados"<<endl;
            return;
        }        
    }
return;    
  }
int main(){
    cout<<"Introduzca 10 números enteros"<<endl;
    ciclo();
    cout<<"El resultado de la suma es: "<<sum<<endl;
return 0;
}
