#include <iostream>
using namespace std;

void ver(int* cadena,int* ar_xP){
if(ar_xP[0]==ar_xP[1]&&ar_xP[0]==ar_xP[2]&&ar_xP[0]==ar_xP[3]){
  cout<<"IMxPIBLE"<<endl;}
  else{
    cout<<ar_xP[0]<<" "<<ar_xP[1]<<" "<<ar_xP[2]<<" "<<ar_xP[3]<<endl;
  }
}

int* generar(int n){
int* cadena=new int[n];
for(int k=0;k<n;k++){
  cin>>cadena[k];
  }
return cadena;
}

int verificar(int* cadena,int* xP,int x){
if(cadena[xP[0]]+cadena[xP[1]]+cadena[xP[2]]+cadena[xP[3]]==x){
  return 1;
  }
else{ 
return 0;
  }
}


int* calcular(int* cadena,int n,int x,int y){

int* xP=new int[4];
int* cadenaP=new int[4];

for(xP[0]=0;xP[0]<n;xP[0]++){
  for(xP[1]=0;xP[1]<n;xP[1]++){
    for(xP[2]=0;xP[2]<n;xP[2]++){
      for(xP[3]=0;xP[3]<n;xP[3]++){
        if((xP[0]!=xP[1]&&xP[0]!=xP[2]&&xP[0]!=xP[3]&&xP[1]!=xP[2]&&xP[1]!=xP[3]&&xP[2]!=xP[3])&&y==0){
          y=verificar(cadena,xP,x);
            if(y==1){
              cadenaP[0]=xP[0];cadenaP[1]=xP[1];cadenaP[2]=xP[2];cadenaP[3]=xP[3];
              }
            }
        }
     }
   }
  }
return cadenaP;
}

int main(){
int n,x;
cin>>n>>x;
int* cadena=generar(n);
int* ar_xP=calcular(cadena,n,x,0);
ver(cadena,ar_xP);
return 0;
}
