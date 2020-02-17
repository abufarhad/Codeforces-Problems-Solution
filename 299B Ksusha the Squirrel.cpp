#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,i,j,k;
    string s;

    while(cin>>n>>k>>s)
    {
    ll cnt=0;
    vector<ll> v;
    fr(i,n) if(s[i]=='.')v.push_back(i+1);

    fr(i, v.size()-1)  if( v[i+1]-v[i] >k){cnt=1; break;}
    if(cnt)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
}
