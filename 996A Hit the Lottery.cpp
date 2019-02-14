#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,t,a,b,c,d,i,j,k,x,y,z,ans;
    cin>>n;

    a=n/100;b=n%100;
    c=b/20; d=b%20;
    x=d/10; y=d%10;
    i=y/5; j=y%5;

    ll p=a+c+x+i+j;
    cout<<p<<endl;

    return 0;
}



