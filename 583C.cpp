
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
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
map<ll, ll>mp;


int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cn=0,sum=0 ;
    cin>>n;

    ll a[n*n];

    multiset<ll>s;
    fr(i,n*n)cin>>a[i] , s.insert(a[i]) , mp[a[i] ]++;

    vector<ll>v, ans;
    for(auto i:s)v.pb(i);

    /*Observe that there are many repeated numbers, and the largest number must be the number on the diagonal.

        Taking one maximum value at a time, and then gcd it with the number that has been taken out to get x.
        Easy to get x must not be on the diagonal, and it appears twice, so erase it from the map Drop (delete).  */

    for(i=v.size()-1; i>=0; i--)
    {
        if(mp[v[i] ]==0)continue;

        fr(j, ans.size())  mp[__gcd(ans[j]  , v[i])] -=2;
        mp[v[i] ]--;
        ans.pb(v[i]);
        cout<<v[i]<<" ";
    }


return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




