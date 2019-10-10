#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll cnt[200006];
map<ll,ll>mp;
priority_queue <pair<ll,ll>>v;

int main()
{
    ll m,n,k,i,j;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++)cin>>a[i], cnt[a[i]]++, mp[a[i] ]++;
    ll d=mp.size();

    for(i=0;i<mp.size();i++)
    {
        for(j=1;j<=mp[i];j++)
        {
            cout<<mp[i]/j<<" "<<i<<endl;
            v.push( make_pair(mp[i]/j, i ));
        }
        cout<<endl;
    }

    for(i=0;i<k;i++)
    {
        cout<<v.top().second<<" ";
        v.pop();
    }


}
