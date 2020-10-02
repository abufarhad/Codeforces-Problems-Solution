

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)


int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=1,sum=0 ;
        scl(n);

        ll a[n];
        fr(i, n)scl(a[i]);

        sort(a, a+n);


        fr(i, n)
        {
            if(a[i] <= ans )ans++;
            else
            {
                cnt++;
                ll tmp=ans+cnt;
                //cout<<"tmp "<<tmp<<" ";
                if(a[i]<=tmp-1 )ans=tmp, cnt=0;

            }
        }

    pfl(ans);
    }

return 0;
}






