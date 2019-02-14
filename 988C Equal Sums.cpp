//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll 	                long long
#define fr(i,n)           for(ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define debug           printf("I am here\n")
#define pb                 push_back
#define mp                make_pair
#define ppb                pop_back
#define scl(x)            scanf("%lld",&x)
#define pfl(x)            printf("%lld\n",x)
#define ps                 printf(" ")
#define pn                 printf("\n")
#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)

int main()
{
    ll i,j,k,m,n,l,cnt=0,hv=0,sum=0;
    cin>>k;
    vector<pair<ll, pair<ll,ll> > >v;

    fr(i,k)
    {
        cin>>n; ll a[n];
        sum=0;
        fr(j,n){ cin>>a[j]; sum+=a[j]; }

        fr(j,n){ ll  x = sum - a[j]; v.pb(mp(x, mp(i, j)));}
    }

        stable_sort(v.begin(), v.end());

        for(i=0;i<v.size()-1;i++)
        {
            if( v[i].first== v[i+1].first && ( v[i].second.first != v[i+1].second.first ) )
            {
            cout<<"YES"<<endl;
            cout<<v[i].second.first+1<<" "<<v[i].second.second+1<<endl;
            cout<<v[i+1].second.first+1<<" "<<v[i+1].second.second+1<<endl;
            return 0;
            }
       }
    cout<<"NO"<<endl;
}
