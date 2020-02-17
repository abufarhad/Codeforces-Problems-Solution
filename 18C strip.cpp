#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll m,n,i,j,k;
    while(cin>>n)
    {
        ll ans=0, cnt=0, res=0;
        ll a[n];
        for(i=0; i<n; i++)cin>>a[i], ans+=a[i];
        for(i=0;i<n-1;i++)
        {
            cnt+=a[i];
            ans-=a[i];
            if(ans==cnt)res++;
        }
        cout<<res<<endl;
    }
}
