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
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)



#define N 100006

int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    ll a[n];

    map<ll, bool>mp;

    fr(i,n)cin>>a[i] , mp[a[i] ]=1;


    ll mx=2*n;

    vector<ll> v, v1;

    k=0;
    x=2*n;
    while(x--)
    {
        v.pb(a[k]);

        fr1(j, 2*n)
        {
        if( mp[j ] !=1  and j>a[k] )
        {
            //cout<<mp[j]<<" "<<j<<" "<<a[k]<<endl;
            v.pb(j);
            x--;
            mp[j]=1;
            k++;
            break;
        }
        }
        //debug;
    }

    fr(i, v.size())v1.pb(v[i] );

    sort(all(v1));

    fr(i, v1.size()-1)if(v[i] ==v[i+1]){cnt=1; break;}

    if(cnt)cout<<-1<<endl;
    else{ fr(i, v.size())cout<<v[i]<<" "; pn;}

    //pn;




    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




