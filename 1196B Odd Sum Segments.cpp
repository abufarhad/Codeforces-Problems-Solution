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
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define tcas(i,t)             for(ll i=1;i<=t;i++)

#define N 100006

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    vector<ll>v;

    scl(t);
    while(t--)
    {
        ll cnt=0,ans=0;
        scl(n);scl(k);
        m=k;
        ll  a[n];
        fr(i,n)cin>>a[i];

        i=0,x=-1;
        for(i=0;i<n && k>1;i++)
        {
            x=i;
            if(a[i]%2==1)k--, v.pb(i+1);
        }

        ans=0;
        for(i=x+1;i<n;i++)ans+=a[i];


        if(ans%2){
        cout<<"YES"<<endl;
        fr(i,v.size())cout<<v[i]<<" ";
        cout<<n<<endl;

        }
        else cout<<"NO"<<endl;
        v.clear();
    }

    return 0;
}
