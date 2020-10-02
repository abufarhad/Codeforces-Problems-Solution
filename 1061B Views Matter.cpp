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
#define debug           printf("I am here\n")
#define mp                make_pair
#define ppb                pop_back
#define ps                 printf(" ")
#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,ans=0, mx=0;
    t=1;

    for(x=1; x<=t; x++)
    {
        ll cnt=0;
        scl(n),scl(m);
        ll  a[n];

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>1)ans+=a[i]-1;
        }

        sort(a,a+n);

       fr(i, n) if(a[i]>mx )mx++;

        ll ex=a[n-1]-mx;
        ans-=ex;
        pfl(ans);
    }

return 0;
}





