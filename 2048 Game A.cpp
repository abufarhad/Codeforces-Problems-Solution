
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
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>t;
    while(t--)
    {
        ll cnt=0,ans=0, ok=0;
        scl(n);
        ll a[n];
        map<ll,ll>mp;
        set<ll>s;
        set<ll>::iterator it ;
        fr(i,n)
        {
            scl(a[i]);
            if(a[i]<=2048) mp[a[i] ]++, s.insert(a[i]);
        }
        for(it=s.begin() ; it!=s.end() ;it++) cnt+= (*it) * (mp[*it]);

        if(cnt>=2048)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}

