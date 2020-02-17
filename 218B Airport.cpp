#include<bits/stdc++.h>
using namespace std;
#define ll long long
int  main()
{
    ll j,i,m,n;
    //while(1){
    cin>>n>>m;
    ll ans=0, cnt=0, mx=0, mn=0,x,y;
    ll a[m];
    y=n;
    for(i=0;i<m;i++)cin>>a[i], ans+=a[i];
    sort(a, a+m);
    /// for mini
    for(i=0;i<m and n>0;i++)
    {
        x=a[i];
        while(x>0 and n>0)mn+=x, x--, n--;
    }

    ///for maxi

    n=y;
    for(i=0; i<n; i++)
    {
        sort(a, a+m);
        mx+=a[m-1];
        a[m-1]--;
    }


    cout<<mx<<" "<<mn<<endl;

}
