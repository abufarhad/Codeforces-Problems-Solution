//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

#define mins  cout<<-1<<endl
int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0;
        b=0; j=0 ;
        cin>>n;

        ll a[n];

        fr(i,n)
        {
            cin>>a[i];
            if(a[i]%2)b++;
            else j++;
        }

        x=y=0;
        fr(i, n)
        {
            if(i%2==0  and a[i]%2==1 )x++;
            if(i%2==1  and a[i]%2==0 )y++;
        }


        ans=min(x, y);
        if(n%2==0)
        {
            if(j==b)pfl(ans);
            else  mins;
        }
        else if(n%2)
        {
            //cout<<j<<" "<<b<<endl;
            if(j==b+1 )pfl(ans);
            else mins;
        }
        else cout<<-1<<endl;;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1


