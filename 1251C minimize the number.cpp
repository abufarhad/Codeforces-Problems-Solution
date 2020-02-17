#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define sz(s)   s.size()
int main()
{
    ll m,n,i,j,k;
    ll t;
    cin>>t;
    while(t--)
    {
        string s, s1, ans="", od, ev;
        cin>>s;
        fr(i, sz(s))
        {
          if( (s[i]-'0' )%2!=0)od+=s[i]; else ev+=s[i];
        }
        i=j=0;
        /*
        while(i<sz(od) and j<sz(ev))
        {
            if(od[i]<ev[j])cout<<od[i], i++; else cout<<ev[j], j++;
        }
        while(i<sz(od))cout<<od[i],i++;
        while(j<sz(ev))cout<<ev[j],j++;
        */
        ans.resize(s.size());
        merge(od.begin(), od.end(), ev.begin(), ev.end(), ans.begin());
        cout<<ans<<endl;
    }
}
