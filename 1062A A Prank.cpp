#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)

int main()
{
    ll n,i,k,ans=0,cnt=0;
        cin>>n;
        ll a[n];
        a[0]=0, a[n+1]=1001;

        fr1(i,n) cin>>a[i];

        fr1(i,n)
        {
            if(a[i]==a[i-1]+1 && a[i]==a[i+1]-1 ){cnt++;ans=max(ans,cnt);}
            else cnt=0;
        }
        cout<<ans<<endl;

    return 0;
}
