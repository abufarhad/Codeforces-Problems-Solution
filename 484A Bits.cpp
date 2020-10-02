#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pn                  printf("\n")
#define pb                  push_back
ll x,y;
int main()
{
    ll m,n,t,b,c,d,i,j,k,z,sum=0;
    scl(n);
    while(n--)
    {
        scl(x), scl(y);
        for(i=1; (x|i)<=y; i<<=1)
        {
            x|=i;
        }
        pfl(x);
    }
}
