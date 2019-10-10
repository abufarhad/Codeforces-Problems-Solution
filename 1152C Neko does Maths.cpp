#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define fr(i,n)             for (ll i=0;i<n;i++)
ll k, ans, a,b,n,m,c;

ll find_k(ll n)
{
    ll tmp=n-a%n;
    ll lcm=((a+tmp)*(b+tmp) / __gcd((a+tmp),(b+tmp) ));
    if(lcm<ans) ans=lcm, k=tmp;
}

int main()
{
    while(cin>>a>>b)
    {
        ll div=abs(b-a);
        ans=(a*b)/__gcd(a,b);

        fr1(i, sqrt(div))
        {
            if(div % i ==0)
            {
                find_k(i), find_k(div/i);
            }
        }
        cout<<k<<endl;
        ans=0,k=0;
    }
}
