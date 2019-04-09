#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            x=i^j;
            if(i+j>x && j+x>i && x+i>j && i<=j && j<=x && x<=n)
                ans++;
        }
    }
    pfl(ans);

    return 0;
}





