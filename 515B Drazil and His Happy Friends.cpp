#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define pn                 printf("\n")



int main()
{
    ll m,n,t,c,b,g,d,i,j,k,x,y,z,l,q,flag=1;

    cin>>n>>m;

    ll boy[n+1]={0} ,girl[m+1]={0};

    cin>>b;
    fr(i,b) {cin>>x;   boy[x]=1;}
    cin>>g;
    fr(i,g){ cin>>y; girl[y]=1;}



    fr(i,2*m*n+1)  if( boy[i%n]==1 || girl[i%m]==1){ boy[i%n]=1,girl[i%m]=1;}


    fr(i,n) {if(boy[i]==0) flag=0;}
    fr(i,m){if(girl[i]==0)flag=0;}

    if(flag==1) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}
