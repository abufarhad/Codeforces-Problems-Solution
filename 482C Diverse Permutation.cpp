//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)           scanf("%lld",&x)
#define pfl(x)           printf("%lld\n",x)
#define pn                printf("\n")
#define debug           printf("I am here\n")
#define mp               make_pair
#define ppb               pop_back
#define dsort(a)        sort(a,a+n,greater<int>())
int main()
{
    ll m,n,i,j,k,l;
    while(cin>>n>>k){
    l=n,j=1;
    vector<ll>v,v1;
    fr1(i,n)
    {
        if(i%2==1 && i==1){v.pb(j);j++;}
        if(i%2==1 && i!=1){v.pb(j);j++;}
        if(i%2==0 ) {v.pb(l);l--;}
    }

    fr(i,k) v1.pb(v[i]);

    if(k%2==0)
    sort(v.begin()+(k),v.end(),greater<int>());
    else
    sort(v.begin()+(k),v.end());

    for(i=k ;i<v.size();i++)v1.pb(v[i]);

    fr(i,v1.size())cout<<v1[i]<<" ";
    pn;
    v.clear(),v1.clear();
    }

}

