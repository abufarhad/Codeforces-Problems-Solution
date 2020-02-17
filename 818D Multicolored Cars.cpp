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
#define debug               cout<<"I am here"<<endl;
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



#define N 100006
ll cnt[N]={0};

int main()
{
    ll t;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll ans=0,sum=0;
    scl(n);
    ll a[n];
    cin>>k;

    fr(i , n)
    {
        cin>>x;
        if( x==k)cnt[k]++;
        else if(cnt[x] >= cnt[k] )cnt[x]++;
    }

    fr1(i, N)
    {
        if(cnt[i]>= cnt[k] and i!=k )
        {
            cout<<i<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




