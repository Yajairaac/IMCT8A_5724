#include<iostream>
using namespace std;

int main(int argc, char*argv[])
{
	int i,  A=0, B=0, Z=0; 
	char n[12];
	if(argc!=13){
	cout<<"ERROR"<<endl;
	return 1;}
	else{
	for (i=1;i<13;i++){
	n[i-1]=argv[i][0];
	}
	}
for(i=0;i<=11;i++){
if(Z==0){
	if(n[i]=='A')
	{
		if(A==0){
			cout<<"A";
			A=1;
	}
		else{
			cout<<"A";
			A=0;
			Z=1;
	}
	}
	else if(n[i]=='B')
	{
		if(B==0){
			B=1;
			Z=1;
			cout<<"A";
			}
		else{
			B=0;
			cout<<"B";
			}
	}
	else{
	cout<<"error";
	}
	}
else{
	if(n[i]=='A')
	{
		if(A==0){
			A=1;
			cout<<"A";
			}
		else{
			A=0;
			Z=0;
			cout<<"B";
			}
	}
	else if(n[i]=='B')
	{	
	if(B==0){
		B=1;
		Z=0;
		cout<<"B";
		}
	else{
		B=0;
		cout<<"B";
		}
	}
}
}
cout<<"   A=  "<<A<<"  B=  "<<B<<"  Z=   "<<Z<<endl;
return 0;
}
