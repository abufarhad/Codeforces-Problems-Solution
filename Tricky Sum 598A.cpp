#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,t,d,ans,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n*(n+1)/2;
        //cout<<ans<<endl;
        a=1;
        while(a<=n)
        {
            ans-=2*a;
            a=a*2;
        }
        cout<<ans<<endl;
    }
        return 0;

}
