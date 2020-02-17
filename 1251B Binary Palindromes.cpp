#include<bits/stdc++.h>
using namespace std;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define ll long long
int main()
{
    ll m,n,i,t,j;
    cin>>t;
    while(t--)
    {
        ll one=0, zro=0, cnt=0, ans=0;
        cin>>n;

        vector<ll> v;
        fr(j, n)
        {
            string s;
            cin>>s;
            fr(i, s.size()){if(s[i]=='1')one++; else zro++;}
            v.push_back(s.size());
        }
        sort(v.begin(), v.end());

        ll pr=one/2+zro/2;
        fr(i, v.size())
        {
            ll need=v[i]/2;
            if(need <=pr)pr-=need, ans++;
        }
        cout<<ans<<endl;
    }

}
