#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)

int main()
{
    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    scl(m);
    set<ll>s;
    ll  a[n],b[n];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for(i=n; i>=1; i--)
    {
        s.insert(a[i]);
        b[i]=s.size();
    }
    while(m--)
    {
        cin>>x;
        cout<<b[x]<<endl;
    }

    return 0;
}




