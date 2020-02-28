#include <iostream>
using namespace std;
int main(){
cout<<"Ingrese la rerie, el ultimo: -99"<<endl;
int x,num=-99;
do{
cin>>x;
if(x>num){
num=x;
}
}while(x!=-99);
cout<<"El mayor es: "<<num<<endl;
return 0;
}
