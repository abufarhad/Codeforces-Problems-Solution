#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,i,j;
    while(cin>>n)
    {
        ll a[n];
        fr(i,n)cin>>a[i];
        sort(a, a+n, greater<int>());
        vector<ll> v;
        //fr(i,n)cout<<a[i]<<" "; cout<<endl;


        fr(i,n-1)
        {
            //cout<<"valo theko"<<endl;
            if( abs(a[i] -a[i+1]) <=1 )
            {
                v.push_back(min(a[i], a[i+1]));
                i++;
            }
        }
        ll ans=0;
        if(v.size()>0)
        fr(i, v.size()-1)
        {
            ans+=(v[i]*v[i+1] );
            i++;
        }
        //cout<<"besi valo nai "<<endl;
        cout<<ans<<endl;
    }
}
