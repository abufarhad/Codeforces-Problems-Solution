#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll m,n,i,j,k;
    string s, s1="";
    cin>>n>>s;
    ll cnt=0, ans=0, mx=0;
    vector<char >v;

    fr(i,n-1)
    {
        cnt=0;
        fr(j,n-1)
        {
            if(s[j]==s[i]  and s[j+1]==s[i+1])cnt++;
        }
        if(mx < cnt)mx=cnt, v.push_back(s[i]), v.push_back(s[i+1]);
    }
    cout<<v[v.size()-2]<<v[v.size()-1]<<endl;
}
