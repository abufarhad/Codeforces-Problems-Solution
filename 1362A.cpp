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

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")


int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q, a;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        scll(a, b);


        if(a==b)cout<<0<<endl;
        else if(a> b )
        {

            while(a>b and a%8==0)  a/=8, cnt++;
            if(a<b)cnt-- , a*=8;

            while(a>b and a%4==0)  a/=4 , cnt++;
            if(a<b)cnt-- , a*=4;

            while(a>b and a%2==0 )  a/=2 , cnt++;
            if(a<b)cnt-- , a*=2;


            if(a==b)pfl(cnt);
            else cout<<-1<<endl;
        }
        else
        {
            while(a<b and a*8<=b )  a*=8 , cnt++;
            if(a>b)cnt-- , a/=8;

            while(a<b and a*4<=b)  a*=4 , cnt++;
            if(a>b)cnt-- , a/=4;


            while(a<b and a*2<=b)  a*=2 , cnt++;
            if(a>b)cnt-- , a/=2;



            if(a==b)pfl(cnt);
            else cout<<-1<<endl;
        }

    }

return 0;
}


