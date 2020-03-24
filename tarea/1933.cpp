#include <iostream>
using namespace std;

int* obtener(){
int* datos;
int num=0;
int L;
int R;

	
while(cin){
	cin>>L>>R;
if((L+R)==0)
	break;
if((L>=1)&&(R<=5))
	datos[num]=L+R;
	num++;
	}
return datos;
}

void imprimir(int* datos){
for(int a=0;a<sizeof(datos);a++){
	if(datos[a]!=0)
		cout<<datos[a]<<endl;
	}
}
int main(){
int* datos=obtener();
imprimir(datos);
}
