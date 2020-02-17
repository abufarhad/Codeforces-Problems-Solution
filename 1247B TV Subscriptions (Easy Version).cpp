//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(t);
    while(t--)
    {
        cin>>n>>k>>d;
        ll  a[n+5];
        fr1(i,n)cin>>a[i];
        ll mn=1e9;
        set<ll>s;

        if(n-d==0)
        fr1(i,n)
        {
            s.insert(a[i]);
            mn=s.size();
        }
        else
        {
            for(i=1; i<=n-d+1; i++)
            {
                for(j=i; j<=d+i-1; j++)
                {
                    cnt++;
                    s.insert(a[j]);
                }
                if(s.size() <mn)  mn=s.size();
                s.clear();
            }
        }
        pfl(mn);
    }
    return 0;
}
