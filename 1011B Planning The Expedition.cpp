//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())

#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

ll a[105], freq[105];

int main()
{
    fast;
    ll t;
    ll i,j,m,n,x;
    ll cnt=0,ans=0,val=0;
    cin>>m>>n;


    fr(i,n)cin>>x, freq[x]++;

    for(i=100;i>=1;i--)
    {
        val=0;
        for(j=1;j<=100;j++)val+=(freq[j] /i);

        //if(val)cout<<i<<" "<<val<<endl;

         if(val>=m){cout<<i<<endl; return 0; }
    }

    cout<<0<<endl;

return 0;
}



