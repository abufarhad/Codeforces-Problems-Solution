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
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                  1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")

int main()
{
    ll n,t,i,p1,p2;
    cin>>t;
    while(t--)
    {
        scl(n);
        ll a[2*n];

        fr(i,n)cin>>a[i];
        for(i=n;i<2*n;i++)a[i]=a[i-n];

        //fr(i,2*n)cout<<a[i]<<" "; pn;

        fr(i,n)
        {
            if(a[i]==1)p1=i;
            if(a[i]==n)p2=i;
        }
        bool ok1=1, ok2=1;

        fr(i,n) if(a[p1+i]!=i+1 )ok1=0;
        fr(i,n) if(a[p2+i]!=n-i) ok2=0;

        if(ok1 or ok2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
