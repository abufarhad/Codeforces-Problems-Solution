#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define N 200005
ll freq[N], a[N];
int main()
{
    ll m,n,i,j,k;
    ll x, y;
    cin>>n>>m;
    fr(i,n)cin>>a[i];

    fr(i,m)
    {
        cin>>x>>y;
        x--;
        freq[x]++;
        freq[y]-=1;
    }
    ///  To Understand
    ///  https://www.youtube.com/watch?v=hDhf04AJIRs&fbclid=IwAR2XgjKl1WiGmEws_r7CP-LilMD3WkYZf4qz_HEan2mXcqpVzfcfdnb3Cm8

    fr1(i,n-1)
    {
        freq[i]+=freq[i-1];
    }

    dsort(a);
    dsort(freq);

    //fr(i,n)cout<<freq[i]<<" " ;  cout<<endl;

    ll ans=0;
    fr(i,n)
    {
        ans+=a[i]*freq[i];
    }

    cout<<ans<<endl;


}
