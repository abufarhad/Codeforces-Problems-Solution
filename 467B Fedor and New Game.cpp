#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

/*
tmp=bitset<20>(a[m]).to_string();

fr(i, m)
{
    cnt=0;
    tm=bitset<20>(a[i]).to_string();

    fr(j,20)  if(tmp[j] !=tm[j] )cnt++;

   //or,  bitset<20> t=a[m]^a[i];  if(t.count()<=k)cnt++;

    if(cnt<=k)ans++;
}
*/


int main()
{
    ll m,n,i,j,k;
    while(cin>>n>>m>>k)
    {
    ll a[m+5];
    fr(i,m+1)cin>>a[i];
    ll cnt=0, ans=0;
    string tmp, tm;

    fr(i, m)if(__builtin_popcount(a[i]^a[m] )<=k )ans++;

    cout<<ans<<endl;
    }
return 0;
}


