#include<iostream>
#include<math.h>

using namespace std;

int ObtVal(int m, int T)
{
int x,teta,w;
        w=m*9.81;
        teta=acos(w/T);
        x=T*sin(teta);
return x;
}

int main()
{
	int T,m,x; 
cout<<"Introduzca la tensión del cable conocida"<<endl;
	cin>>T;
cout<<"Introduzca la masa"<<endl;
	cin>>m;
x=ObtVal(m,T);

cout<<"La fuerza que se requiere en x es: "<<x<<" Newtons"<<endl;

return 0;
}
