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
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 100006

int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n;

    ll a[n];

    fr(i,n)cin>>a[i];

    ll mov=0;
    ll now=a[0];

    bool vis[n];
    mem(vis, 0);

    for(i=0 , j=n-1 ; i<=j; )
    {
        //cout<<now<<endl;
        sum++;
        if(mov%2==0)
        {
            ll sm=0;
            while(i<=j and now>sm) if(vis[i]==0){  sm+=a[i], vis[i]=1;i++;  }else break;

            //cout<<"sm "<<sm<<endl;
            cnt+=sm;
            if(now>sm ){ans=1; break;}
            now=sm+1;

            mov++;
        }
        else
        {
           ll sm=0;
          //  while(i<=j and now>sm)sm+=a[j], j--;
           while(i<=j and now>sm) if(vis[j]==0){  sm+=a[j], vis[j]=1;j--;  }else break;
           cn+=sm;
           if(now>sm ){ans=1; break;}
           now=sm+1;

           // cout<<"sm1 "<<sm<<endl;

          mov++;
        }

       // for(k=i; k<=j;k++)cout<<a[k]<<" "; pn;

    }

    cout<<sum<<" "<<cnt<<" "<<cn<<endl;

    }

return 0;
}

///***************Before submit*****************

///    ****Please check all base case output***
///    *check for integer overflow,array bounds
///    *check for n=1



