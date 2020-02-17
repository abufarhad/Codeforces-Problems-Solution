#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,j;
    while(cin>>m>>n)
    {
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ll ans=a[0]-1, tmp=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            ans+=a[i+1]-a[i];
            //cout<<"ans "<<ans<<endl;
        }
        else if(a[i]>a[i+1])
        {
            ans+=(m-a[i]+a[i+1]);
//             tmp=m-a[i];
//             //cout<<"tmp "<<tmp<<endl;
//            tmp+=a[i+1];
        }
    }
    cout<<ans+tmp<<endl;
}

}
