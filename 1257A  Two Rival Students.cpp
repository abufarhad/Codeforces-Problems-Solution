#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)


int main()
{
    ll m,n,i,j,k;
    cin>>k;
    while(k--)
    {
        ll a,b,x,y, ans, ans1=0, ans2=0;
        cin>>n>>m>>a>>b;
        if(a>b)
        {
            ll tmp=min(n, a+m);
            ll baki=n-(a+m);



            if(baki<0)
            {
            ll tmp1=max(1LL, b-abs(baki) );
            ans=abs(tmp1-tmp);
            }
            else ans=abs(tmp-b);

        }

        else
        {
            ll tmp=min(n, b+m);
            ll baki=n-(b+m);



            if(baki<0)
            {
            ll tmp1=max(1LL, a- abs(baki) );
            ans=abs(tmp1-tmp);
            }
            else ans=abs(tmp-a);
        }

        cout<<ans<<endl;
    }

    }
