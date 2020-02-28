#include <iostream>
using namespace std;

int main()
{
int p=0,i=0,n;
for(n=1;n<=200;n++)
{
if(n%2==0)
{
p=p+n;
}else
{
i=i+n;
}
}
cout<<"la suma de pares es: "<<p<<endl;
cout<<"la suma de impares es: "<<i<<endl;


}
