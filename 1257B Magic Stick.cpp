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
        ll a,b,x,y, ans, cnt=0, cn=0;
        cin>>a>>b;

        if(  a>=b)cnt=1;
        else
        {
            if(a>1)
            {
                set<ll>s;
                ll tmp=a;
                while(tmp<b)
                {
                    if(tmp%2)tmp--;
                    else tmp=(3*tmp)/2;

                    s.insert(tmp);
                    if(tmp==b){cnt=1; break;}
                    cn++;
                    if(cn>999)break;
                }
                if(tmp>b or  s.size()>988)cnt=1;

            }
        }

        if(cnt)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

