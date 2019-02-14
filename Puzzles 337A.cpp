#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,k,ans=100000;
    cin>>n>>m;
    int a[m];
    for(i=0; i<m; i++)cin>>a[i];
    sort(a,a+m);
    n--, m-=n;
    //for(i=0;i<m-n;i++) ans=min(ans,(a[i+n-1]-a[i]));
    while(m--)  ans=min(ans,a[m+n]-a[m]);
    cout<<ans;
}
