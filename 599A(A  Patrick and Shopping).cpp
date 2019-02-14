#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,i,m,n,x,k;
cin>>a>>b>>c;
m=a+b; k=a+c; x=b+c;
if(m<c){ n= 2*(a+b); cout<<n<<endl;return 0;}
else if(k<b){ n= 2*(a+c); cout<<n<<endl;return 0;}
else if(x<a) {n= 2*(c+b); cout<<n<<endl;return 0;}
else n=a+b+c;  cout<<n<<endl;return 0;

}
