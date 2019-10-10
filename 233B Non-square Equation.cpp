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

ll digit_sum(ll n)
{
    ll sum=0;

    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;

}
int main()
{
    ll m,n,i,j,k,l;
    scl(n);
    ll cnt=0;
    ll x=sqrt(n);
    while(x*x + 90*x >=n )
    {
        if(x*x+ digit_sum(x)*x ==n){cout<<x<<endl; return 0;}
        x--;
    }
    cout<<"-1"<<endl;
}
