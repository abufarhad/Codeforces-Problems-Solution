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
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 200006

ll m,n,a,b,c,d,i,j,k,x,y,z,l,r, p, q, taka_ache;
string s,s1, s2, s3, s4;
ll cntB=0, cntS=0, cntC=0 , cnt=0,cn=0,ans=0,sum=0 ;

bool is_possible(ll n)
{
    ll total_taka=taka_ache;
    ll extra_a= max( 0ll , n*cntB-a) , extra_b= max( 0ll , n*cntS-b ), extra_c= max( 0ll , n*cntC-c );

    total_taka-=extra_a*x ;
    total_taka-=extra_b*y ;
    total_taka-=extra_c*z;

    if( total_taka>=0  )return 1;
    else return 0;
}

int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        cin>>s;
        cin>>a>>b>>c>>x>>y>>z>>taka_ache;

        fr(i, s.size())
        {
            if(s[i]=='B')cntB++;
            else if(s[i]=='S')cntS++;
            else cntC++;
        }

        l=1 , r=taka_ache+100;
        while(l<=r)
        {
            ll mid=(l+r)/2;

            if( is_possible(mid) )
            {
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;

            //cout<<l<<"-- "<<r<<endl;
        }

        cout<<ans;pn;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1
