#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)

int main()
{
        ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

        ll cnt=0,ans=0;
        scl(t);
        while(t--)
        {
            cnt=0;
            scl(n);scl(m), scl(k);
            ll  h[n];
            fr(i,n)cin>>h[i];

        for(i=0;i<n-1;i++ )
        {
            ll mx=max(0ll, h[i+1]-k);
            m+=h[i]-mx;
            if(m<0){cnt=1;break;}
        }
            if(cnt==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;

        }
return 0;
}


