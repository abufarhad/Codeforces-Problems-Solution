#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll m,n,i,ans=0,cnt=0;
    cin>>n;
    ll a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if( i>0 && a[i]<a[i-1])
        {
            cnt++, m=i;
        }
    }

    if(cnt==0) cout<<"0"<<endl;

    else if(cnt==1 && a[n-1]<=a[0])
    {
        cout<<n-m<<endl;
    }
    else
        cout<<"-1"<<endl;
}
