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

ll  mstfreq(ll arr[], ll n)
{
    // Sort the array
    sort(arr, arr + n);

    // find the max frequency using linear traversal
    ll mx_cnt = 1, res = arr[0], cnt = 1;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            cnt++;
        else
        {
            if (cnt > mx_cnt)
            {
                mx_cnt = cnt;
                res = arr[i - 1];
            }
            cnt = 1;
        }
    }

    // If last element is most frequent
    if (cnt > mx_cnt)
    {
        mx_cnt = cnt;
        res = arr[n - 1];
    }

    return res;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k=101,x,y,z,l,q,r;

    ll cnt=1,ans=0;
    scl(n);
    ll  a[n];

    for(i=0; i<n; i++) cin>>a[i];
    ll f=mstfreq( a,n);

    cout<<f<<endl;
    vector<ll>v,v1;
    fr(i,n) if(a[i]!=f ) {v.pb(a[i]);v1.pb(a[i]);}

    sort(v.begin(), v.end());

    fr(i, v.size())cout<<v[i]<<" ";

    cnt=1;
    while(k--)
    {
        if(v.size()==1){cout<<abs(f-v[0])<<endl; return 0;}

        fr(i,v.size())
        {
            if( v[i] >f)v[i]-=cnt;
            if( v[i] <f) v[i]+=cnt;
        }
        fr(i, v.size())cout<<v[i]<<" - "; pn;

        fr(i,v.size()-1) if(v.size()>1&& v[i] ==f && v[i] == v[i+1] )
        { m=-1; cout<<cnt; return 0;}else {v=v1; cnt++;}


    }

    cout<<-1;

    return 0;
}




