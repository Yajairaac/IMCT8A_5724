#include<iostream>
using namespace std;

int main()
{
int a;
int b;
int c;
int A;
int B;
int C;

cin>>a;
cin>>b;
cin>>c;

if(a<b&&a<c){
	A=a;
if(b<c){
	B=b;
	C=c;}
else{
	B=c;
	C=b;}
}
else if(b<a&&b<c){
	A=b;
if(a<c){
	B=a;
	C=c;
}
else{
	B=c;
	C=a;}
}
if(c<a&&c<b){
	A=c;
if(a<b){
		B=a;
		C=b;}
else{
		B=b;
		C=a;}
}
cout<<"ABC"<<endl;
cout<<A<<B<<C<<endl;
return 0;
}

