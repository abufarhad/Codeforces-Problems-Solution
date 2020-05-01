#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 100006
unordered_map<ll, ll> cnt ;     //search time avg case O(1) and in worst case  O(n)

ll calc(ll i, ll j)
{
    ll ans=2;
    unordered_map<ll, ll> mp;
    mp[ i ]++, mp[j]++;

    while(  cnt[i+j]>0 and cnt[i+j]> mp[i+j ] )
    {
        ll tmp=i+j;
        mp[tmp]++;

        i=j,
        j=tmp;
        ans++;
    }
    return ans;
}


int main()
{
    fast;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll ans=0;


    scl(n);
    ll a[n];

    fr(i,n)cin>>a[i] ,   cnt[a[i] ]++ , ans+= (a[i]==0 ) ;
    bool one=0;


    asort(a);
    fr(i, n)
    {
       fr(j, n)
       {
          if(i ==j or (a[i]==a[j] and a[i]==0   ) )continue;
          if(a[i] == 1 && a[j] == 1 && one) continue;
          if(a[i] == 1 && a[j] == 1) one = 1;
          ans=max(ans, calc(a[i] , a[j] ) );
       }
    }

    cout<<ans<<endl;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




