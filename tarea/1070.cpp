#include<iostream>
using namespace std;

int* leer(){
int* numeros;
int pos=0,num;
	while(cin){
	cin>>num;
		if(num>=1&&num<=100){
		numeros[pos]=num;
		pos++;
		}
	}
return numeros;
}


void calcular(int* numeros){
	for(int p=0;p<sizeof(numeros);p++){
	double rect,cuad;
	int n=numeros[p];
	cuad=((2*n*n*n)+(3*n*n)+n)/6;
	rect=((n*n*n*n)+(2*n*n*n)+(n*n))/4;
	if(cuad>0&&rect>0)
	cout<<cuad<<" "<<rect<<endl;
	}
}


int main(){
int* numeros=leer();
cout<<endl;
calcular(numeros);
return 0;
}

