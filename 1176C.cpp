#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

ll cnt1, cnt2, cnt3, cnt4, cnt5, cnt6;
int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        cin>>n;

        ll a[n];

        fr(i,n)
        {
            cin>>a[i] ;

            if(a[i]==4)cnt1++;
            else if(a[i]==8 and cnt1>cnt2)cnt2++;
            else if(a[i]==15 and cnt2>cnt3)cnt3++;
            else if(a[i]==16 and cnt3>cnt4)cnt4++;
            else if(a[i]==23 and cnt4>cnt5)cnt5++;
            else if(a[i]==42 and cnt5>cnt6 )cnt6++;
        }

        ll ans=n- cnt6*6;
        cout<<ans;pn;
    }

return 0;
}
