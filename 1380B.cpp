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

map<char , ll>mp;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>s;
        n=s.size();



        fr(i, n)mp[s[i] ]++;
        char ch;

        if( mp['R' ] >=mp['P' ]  and  mp['R' ] >=mp['S' ]  )ch='P';
        else if( mp['P' ] >=mp['S' ]  and  mp['P' ] >=mp['R' ]  )ch='S';
        else if( mp['S' ] >=mp['P' ]  and  mp['S' ] >=mp['R' ]  )ch='R';


        mp.clear() ;

        fr(i, n)cout<<ch;

        pn;
        //cout<<ans;pn;
    }

return 0;
}

