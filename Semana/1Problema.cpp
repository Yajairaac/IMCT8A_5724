#include <iostream>
using namespace std;

void ver(int* arreglo,int x){
cout<<arreglo[x]<<" ";
if(arreglo[x]==1){
  cout<<endl;
  }
    else {
    ver(arreglo,(x+1));
    }
}

int* funcion(int n,int* arreglo,int x){
if(n!=1){
  if(n%2==0){
    n=n/2;
    }
  else{
    n=(n*3)+1;
    }
      
arreglo[x]=n;
x++;
funcion(n,arreglo,x);
  }
return arreglo;
}

int main(){
int n,x=0;
int* arreglo;
cin>>n;
arreglo[x]=n;x++;
  if(n<=106&&n>=1){
    arreglo=funcion(n,arreglo,x);
    ver(arreglo,0);
  }
return 0;}
