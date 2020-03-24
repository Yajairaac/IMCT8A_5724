#include<iostream>
using namespace std;
int main()
{
	int CASOS, X, Y;

cin>>CASOS;// se lee el texto
for(Y=1;Y<=CASOS;Y++)
{
	cin>>X;
	if(X%4==0)
	cout<<"YES"<<endl;
else
	cout<<"NO"<<endl;
	}
return 0;
}
