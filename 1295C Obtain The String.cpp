#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll i, j, k , pos=0, ppos=-1 , ans=1;
        string s, t, z;

        cin>>s>>t;
        ll sz=s.size();
        vector<ll>p[30];

        fr(i, sz)p[s[i]-'a' ].push_back(i);

        fr(i, t.size())
        {
            ll k=t[i]-'a';

            if(p[k].size()==0){ans=-1; break;}
            pos=upper_bound(p[k].begin() , p[k].end() , ppos ) - p[k].begin();


            //cout<<pos<<" "<<p[k].size()<<endl;
            if(pos==p[k].size())
            {
                ans++;
                pos=0;
            }
            ppos=p[k][pos];

           // cout<<t[i]<<" "<<pos<<" "<<ppos<<" "<<p[k][pos]<<endl;
        }

        cout<<ans<<endl;
    }
}
