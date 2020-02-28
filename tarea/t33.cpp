#include <iostream>

using namespace std;

int suma=0;
long double producto=1;

int calcular(){
for(int a=20;a<=400;a+=2){
if(a%2==0){
producto=producto*a;
suma+=a;
}
}
return 0;
}

int main(){
calcular();
cout<<"La suma es: "<<suma<<endl;
cout<<"El producto es: "<<producto<<endl;
return 0;
}
