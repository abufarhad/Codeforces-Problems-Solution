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
#define debug               printf("I am here\n")
#define ps                  printf(" ")


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll cnt=0,ans=0, mx=0;
    ll n,m,r,p,s;
    cin>>n>>r>>p>>s;
    string s2, s1(n, '?');
    //cout<<s1<<endl;
    cin>>s2;

    fr(i, n)
    {
        if(s2[i]=='R' and p)        p--, s1[i]='P';
        else if(s2[i]=='P' and s) s--, s1[i]='S';
        else if(s2[i]=='S' and r) r--, s1[i]='R';
    }

    fr(i, n)
    {
        if(s1[i]=='?')
        {
            if(r)s1[i]='R', r--;
            else if(p)s1[i]='P', p--;
            else if(s)s1[i]='S', s--;

        }
        else cnt++;
    }

    if( cnt>=(n+1)/2 )cout<<"YES"<<endl<<s1<<endl;
    else cout<<"NO"<<endl;
    }

return 0;
}
