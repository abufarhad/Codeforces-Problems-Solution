#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,ans=0,cn=0;
    string s;
    cin>>n>>s;
    x=s.size();
    y=x;
    fr(i,x)
    {
        if(s[i]=='0')cnt++;
        else cn++;
    }
    if(cnt!=cn) cout<<1<<endl<<s<<endl;
    else
    {
        cout<<2<<endl;
        fr(i,x-1)cout<<s[i];
        cout<<" "<<s[x-1]<<endl;
    }
    return 0;
}


