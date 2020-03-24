#include <iostream>
#include <string>
using namespace std;

float numero(char *valor)
{
	char tmp[10];
	for(int X=0;(X<sizeof(valor)||9);X++)
	tmp[X] = valor[X+1];
	return stof(tmp);
}

int main()
{
	char str[10];
	cin>>str;
	float Resultado =0;
	float Y =0;
	while(cin)
	{
		Y = numero(str);
		if(str[0]=='>')
			Resultado -= Y;
		else
			Resultado += Y;
	cin>>str;
	}
	cout<<"Resultado= "<<Resultado<<endl;
	return 0;
}
