#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define Pi                  acos(-1.0)

int main()
{
    ll  m,u,j,i,n, t,d,k;
    cin>>t;
    while(t--)
    {
        map<ll, ll> mp;
        cin>>n>>k>>d;
        ll a[n];
        fr(i, n)cin>>a[i];
        j=0;
        ll ans=0,cnt=0;
        fr(i, n)
        {
            if(i<d)
            {

                if(mp[a[i] ]==0)cnt++, ans++;
                mp[a[i] ]++;
            }
            else
            {
                if(mp[a[j]]==1 )cnt--;
                mp[a[j] ]--;
                if(mp[a[i] ]==0 )cnt++;
                mp[a[i] ]++;
                ans=min(ans, cnt);
                j++;
            }
        }
        pfl(ans);
    }

}
