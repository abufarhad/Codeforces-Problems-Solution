
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
string a, b,s,s1, s2, s3, s4;

void flip_and_rev(ll n)
{
    ll i=0 , j=n;
    while(i<j)swap(a[i] , a[j] ) , i++ , j--;

    fr(i, n){ if(a[i]=='1')a[i]='0';else a[i]='1'; }
}


int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>a>>b;
        vector<ll>v;

        for(i=n-1;i>=0;i--)
        {
            if(a[i]!=b[i] )
            {
                if(a[i]!= a[0])v.pb(1) , a[0]=a[i];

                v.pb(i+1);
                flip_and_rev(i);

                //cout<<a<<" "<<b<<endl;
            }
        }


        cout<<v.size()<<" ";
        fr(i, v.size())cout<<v[i]<<" ";pn;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



