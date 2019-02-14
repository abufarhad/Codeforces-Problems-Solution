#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long

int main()
{
    ll m,n,t,a,b,c,d,i,j,k,x,y,z,l,q,r,ex_a,ex_b;

      ll cnt=0,ans=0;
      cin>>x>>y>>z>>a>>b>>c;

      if(a>=x) { ex_a= (a-x); b+=ex_a;}

      if(b>=y) { ex_b=(b-y); c+=ex_b; }


      if(a>=x && b>=y && c>=z )cout<<"YES"<<endl;
      else cout<<"NO"<<endl;


return 0;
}




