#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define debug               printf("I am here\n")
#define pfl(x)              printf("%lld\n",x)
#define pn                  printf("\n")
#define pb                  push_back

vector<ll>v[27];

int main()
{
    ll m,n ,i,j,k;
    string s;
    cin>>n>>s;
    fr(i,s.size())
    {
        v[s[i]-'a' ].pb(i+1);
    }
    scl(m);
    while(m--)
    {
        string s1;
        cin>>s1;
        vector<ll>cnt(26, 0);   ///create fixed 26 sized vector and initialize initially all 0
        for(auto c : s1)cnt[c-'a']++;
        //for(i=0; i<s1.size(); i++)cnt[s1[i]-'a' ]++;

        ll ans=-1;
        fr(i, 26)
        {
            if(cnt[i ] >0) ans=max(  ans, v[i][ cnt[ i]-1 ] );
        }

        pfl(ans);
    }
}
