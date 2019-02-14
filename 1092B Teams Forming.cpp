#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define dsort(a)        sort(a,a+n,greater<int>())

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans=0,q;
    cin>>n;
    ll  a[n];
    for(i=0; i<n; i++) cin>>a[i];
    dsort(a);
    for(i=0;i<n;i+=2) ans+=(a[i]-a[i+1] );

    cout<<ans<<endl;
}
