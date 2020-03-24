#include<iostream>
using namespace std;

int main()
{
int A;
long B;
long R=0;
	cin>>A;
	cin>>B;
     if(A>=1&&B<=1000000000){
	R=(A+B)+(A*B)+(B+A)+(B*A);
	cout<<R<<endl;}
            return 0;
}

