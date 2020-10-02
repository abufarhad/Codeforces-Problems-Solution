#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")
#define N 200006

int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        ll a[n];
        vector<ll>v , v1;

        fr(i,n)
        {
            cin>>a[i];
            if(a[i]<0 )v1.pb(i);
            else if(a[i]>0 )v.pb(i);
        }

        i=0 , j=0;


        j=0;

        for(i=0 ; i<n; )
        {
            while(a[i]>0 )
            {
                if( cn<v1.size() and i<v1[j] )
                {
                    cnt=a[i ] + a[v1[ j ] ];

                    if(cnt<0 )  {a[ i ]=0 , a[v1[ j ] ]=cnt; }
                    else
                    {
                        a[v1[ j ] ]=0, a[i ]=cnt;
                        j++  , cn++;
                    }
                }
                else if( cn>=v1.size()  )break;
                else j++, cn++;
            }
            i++;
        }

        fr(i , n)
        {
            if(a[i]>0)ans+=a[i];
        }


       pfl(ans);

    }

return 0;
}
