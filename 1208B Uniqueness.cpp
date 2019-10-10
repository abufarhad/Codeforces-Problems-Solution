#include<bits/stdc++.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pn                  printf("\n")
int main()
{
    ll m,n,i,j,k;
    ll cnt=0, ans=5e10;
    cin>>n;
    ll a[n];
    map<ll, ll>mp;
    fr(i,n)
    {
        cin>>a[i];
        mp[ a[i]]++;
        if( mp[ a[i]] >=2)cnt++;
    }

    if(cnt>0)
    {
        fr(i,n)
        {
            for(j=i;j<n;j++)
            {
                if(mp[a[j] ]>=2 )mp[a[j] ]--, cnt--;
                if(cnt==0 )ans=min(ans, j-i+1 );
             }
             cnt=0;

             mp.clear();
             fr(k,n)
             {
                 mp[a[k] ]++;
                 if( mp[a[k] ] >=2)cnt++;
             }
        }
        cout<<ans<<endl;
    }
    else cout<<0<<endl;


}
