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
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

bool cmp( const pair<ll,ll> &a, const pair<ll,ll> &b )
{
    return ( a.first - a.second > b.first- b.second);
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,cn=0,ans=0;
    scl(n), scl(m);
    ll  a[n];
    vector<ll>v,v1;
    vector< pair<ll, ll> >v2;
    map<ll,ll>mp;
    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        v.pb(x), v1.pb(y);
        ans+=x;
        cnt+=y;
    }
    //cout<<ans<<" "<<cnt<<endl;

    if(ans>m && cnt>m)
        cout<<"-1"<<endl;
    else
    {
        if(ans<=m)
            cout<<"0"<<endl;
        else
        {
            fr(i,n)
            {
                v2.pb(make_pair(v[i],v1[i]) );
            }
            sort(v2.begin(), v2.end(), cmp);
            //fr(i,n)  cout<<v2[i].first<<" "<<v2[i].second<<endl;
            fr(i,n)
            {
                if(ans>m)
                {
                    ans=ans-v2[i].first+v2[i].second, cn++;
                }
                else
                    continue;
            }
            cout<<cn<<endl;
        }
    }

    return 0;
}




