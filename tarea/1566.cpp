#include <iostream>
using namespace std;

long* obtener(){
long* datos;

int num,X=0;
while(cin){
        cin>>num;
if(num==0)
        break;
if((num>=1)&&(num<=500))
        datos[X]=((2*num*num*num)+(3*num*num)+num)/6;
        X++;
        }
return datos;
}

void imprimir(long* datos){
for(int a=0;a<sizeof(datos);a++){
if(datos[a]!=0)
                cout<<datos[a]<<endl;
        }
}
int main(){
long* datos=obtener();
cout<<endl;
imprimir(datos);
}

