#include<iostream>
using namespace std;
int main()
{
	float x, sum=0;
cout<<"Introduzca los datos de entrada del archivo"<<endl;
cin>>x;
while(cin){
if(x>0)
sum=sum+x;
cin>>x;}
cout<<"Suma de positivos es:  "<<sum<<endl;
return 0;
}
