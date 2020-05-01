#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll calc(ll n)
{
    ll res=0;
    while(n%5==0)
    {
        n/=5;
        res++;
    }
    return res;
}


int main()
{
    ll j , i, n;

    while(cin>>n)
    {
        ll cnt, k=0, ans=0;
        while(k<n)
        {
            ans+=5;
            cnt=calc(ans);
            k+=cnt;
        }

        if(k==n){cout<<5<<endl; for(i=0;i<5; i++)cout<<ans+i<<" "; cout<<endl;}
        else cout<<0<<endl;
    }
}
