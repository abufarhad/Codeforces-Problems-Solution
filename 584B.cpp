#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define md 1000000007


ll bigmd(ll b, ll p)
{
    ll res=1, rem=b;
    while(p)
    {
        if(p%2==1 )
        {
            res=res*rem%md ;
            p--;
        }
        rem=rem*rem%md;
        p>>=1;
    }
    return res;
}

int main()
{
    ll m, n, i,j;
    cin>>n;
    ll p=n;

    ll ans=(( bigmd(27, p)-bigmd(7, n))+md)%md ;

    cout<<ans<<endl;
}
