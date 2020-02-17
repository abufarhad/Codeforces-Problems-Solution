
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)

ll f(ll n)
{
    if(n==0)return 1;
    if(n%3 > 1 )return 0;
    return f(n/3);
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    scl(t);
    while(t--)
    {
        scl(n);
        while( f(n) !=1)n++;
        cout<<n<<endl;
    }


return 0;
}



