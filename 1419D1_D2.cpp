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
#define N 200005

 map<ll, ll>mp;
int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        ll a[n];
        fr(i,n)cin>>a[i];

        sort(a, a+n);

        ll ev=1, od=0;

        vector<ll>v(n , 0);
        fr(i , n/2)
        {
            v[ev]=a[i];
            ev+=2;
        }

        for(i=n/2; i<n; i++)
        {
            v[od]=a[i];
            od+=2;
        }


        for(i=1; i<v.size()-1; i+=2)
        {
            if( v[i-1]>v[i]  and v[i]<v[i+1]  )ans++;
        }


        cout<<ans;pn;
        fr(i , v.size())cout<<v[i]<<" ";pn;

    }

return 0;
}

