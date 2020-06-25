#include <iostream>
#include <string>
using namespace std;

int getR(long* an,long* bn,long n,int m,long k){
int r=0;
  for(int x=0;x<m;x++){
    for(long y=0;y<n;y++){
      if((an[y]<=(bn[x]+k))&&(an[y]>=(bn[x]-k))){
        r+=1;bn[x]=0;
        }
      }
    }
return r;
}

long* getAn(long n){
long* an=new long[n];
  for(int x=0;x<n;x++){
  cin>>an[x];
  }
return an;
}

long* getBn(int m){
long* bn=new long[m];
  for(int x=0;x<m;x++){
  cin>>bn[x];
  }
  return bn;
}


int main(){
int m;
long n,k;
cin>>n>>m>>k;
long* an=new long[n];
long* bn=new long[m];
  if(n>=1&&m<=200000&&(0<=k<=1000000000)){
    an=getAn(n);
    bn=getBn(m);
    int r=getR(an,bn,n,m,k);
    cout<<r<<endl;
  }
return 0;
}
