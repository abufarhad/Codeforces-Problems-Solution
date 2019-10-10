#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back

int main()
{
    ll m,n,i,j,k;
    cin>>n;
    string s;
    cin>>s;
    ll sz=s.size();
    ll ans=0;
    fr(i,sz)
    {
        if(s[i]=='+')ans++;
        else  ans--;
        ans=max(0ll, ans);
    }
    cout<<ans<<endl;
}

