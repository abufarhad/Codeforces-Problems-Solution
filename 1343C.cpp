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


int main()
{

    ll t;
    cin>>t;
    while( t--)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    ll a[n];

    vector<pr>v, v1;

    fr(i,n){ cin>>x ; a[i]=x;  if(x>0)v.pb({x, i}); else v1.pb({x, i});}

    if(v.size()==0){ sort(all(v1)),  reverse(all(v1) ) ; ans=v1[0].ff;}
    else if(v1.size()==0){sort(all(v)), reverse(all(v) ) ; ans=v[0].ff;}
    else
    {
        ll mx , cnt=1;
        for(i=0; i<n ; )
        {
            x=i;
            if(a[i]>0 and cnt%2)
            {
                //cout<<"p "<<i<<endl;
                mx=-inf;
                while(a[i]>0  and i<n )mx=max(mx, a[i]), i++;
                if(cnt%2==1)ans+=mx ,  cnt++;

                //cout<<"mx  p "<<mx<<" "<<ans<<endl;
            }
            else
            {
                //cout<<"n "<<i<<endl;
                mx=-inf;
                while(a[i]<0 and i<n)mx=max(mx, a[i]), i++;
                if(cnt%2==0)ans+=mx ,cnt++;

                //cout<<"mx  n "<<mx<<" "<<ans<<endl;
            }
            if(x==i)i++;
        }

        //cout<<"ans "<<ans<<endl;

        //..................................................................//
        sum=ans;
        ll cn=cnt;

        cnt=1;
        ans=0;

        for(i=0; i<n ; )
        {

            x=i;
            if(a[i]<0 and cnt%2==1)
            {
                //cout<<"p1 "<<i<<endl;
                mx=-inf;
                while(a[i]<0 and i<n)mx=max(mx, a[i]), i++;
                if(cnt%2==1)ans+=mx ,cnt++;

                 //cout<<"mx  n1 "<<mx<<" "<<ans<<endl;
            }
            else
            {
                //cout<<"n1 "<<i<<endl;
                mx=-inf;
                while(a[i]>0 and i<n )mx=max(mx, a[i]), i++;

                if(cnt%2==0){ ans+=mx ,  cnt++;}

               //cout<<"mx  p1 "<<mx<<" "<<ans<<endl;
            }
             if(x==i)i++;
        }

        if(cn > cnt)ans=sum;
        else if(cn==cnt )ans=max(ans , sum);

    }

    cout<<ans;pn;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



