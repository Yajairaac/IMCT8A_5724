#include <iostream> 
using namespace std; 
  
int* obtener(int N){ 
int* numeros=new int[N]; 
for(int x=0;x<N;x++)
	cin>>numeros[x];
            return numeros; 
} 
long sumar(int N,int* recibido){
long sum=0;
for(int x=0;x<N;x++)
	sum+=recibido[x];
	return sum;
}
int* ordenar(int N, int* recibido){
int* numeros=new int[N+1];
int menor=1,posicion=0,pos=0,posA=0;
long sum=1;
	while(posicion<=N){
	if(recibido[pos]==menor){
	numeros[posicion]=menor;
	recibido[pos]=0;
	posicion++;
	posA=pos;
			}
	pos++;
		if(pos>=N){pos=0;}
		if(posA==pos){menor++;}
	sum=sumar(N,recibido);
if(sum==0||menor>1000){numeros[posicion]=0;posicion++;}
		}
return numeros;
}
void imprimir(int* numeros){
for(int x=0;x<sizeof(numeros);x++){
	if(numeros[x]<=1000&&numeros[x]>=1)
	cout<<numeros[x]<<endl;
	}
}
int main(){ 
int N;
cin>>N;
int* numeros=obtener(N); 
            numeros=ordenar(N,numeros);
cout<<endl;
imprimir(numeros);

return 0; 
} 
