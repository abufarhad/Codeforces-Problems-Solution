
#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
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
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,cn=0,sum=0 ;
    cin>>n;

    vector<ll> v;
    v.pb(1);

    /*  If we look closely total  mass of after day by day  are grows in this pattern - 1 3 7 15 ......................
         and Number of bacteria will be-  1 2 4 8 ........................
         For Ex. n=11 , So After 7 if  we can find next day
         if no split bacteria grows up 11 ,
         if 1 split then 12 ,
         if 2 split then 13 ,
         if 3 split then 14
         so, we can find the calculation this way calculate up to 8 then cut the extra then sort and find the difference .

         if no split then 11 if 9 comes up then we must see in previous must there some bacteria not split
         so same calculation 9-7 = 2 then sort and find the difference .
    */

    for(i=1; i<=n; i++)
    {
        x=1<<i;
        if(x <=n)v.pb(x);
        if(x >n ) break;
    }

    fr(i ,v.size())cout<<v[i]<<" ";pn;
    v[v.size()-1]=n-(v[v.size()-1]-1);
    fr(i ,v.size())cout<<v[i]<<" ";pn;

    vasort(v);
    //fr(i, v.size())cout<<v[i]<<" "; pn;

    cout<<v.size()-1<<endl;
    fr(i, v.size()-1) cout<<v[i+1]-v[i]<<" ";

    pn;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



