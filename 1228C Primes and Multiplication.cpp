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
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


ll bigmd(ll b, ll p)
{
    //debug;
    ll ans=1;
    while(p)
    {
        if(p&1)ans=(ans*b)%md;
        p>>=1;
        b=(b*b)%md;
    }
    return ans%md;
}

#define N 5000006
ll num[N];

bool prime(ll p)
{
    for(ll i=2; i<=sqrt(p) ; i++)
    {
        if(p%i==0){return 0;break;}
    }
    return 1;
}

/*
Here question is lilbit tricky  -
so, the trick is all of we need to take care of x , thats limit is 1e9
and upto  1e9  prime divisor have only sqrt(1e9)

and for n we see if any divisor less then or greater then any prime divisor that is equal  to  px^0  = 1

so we only care of  x's prime divisors
and for calculating g(n, p(x)) we calculate only how many divisors have 1 to n of p(x)^1 , p(x)^2 ,  p(x)^3 . and so on ....
and add and finally calculate it power or bigmod .
Finally calculate the result with mod
*/

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;


    ll cnt=0,ans=0,sum=0;
    cin>>x>>n;


    for(i=2; i<=sqrt(x); i++)
    {
        //debug;
        if(prime(i)  and x%i==0) num[cnt++]=i ;//, cout<<i<<" ";
        if(prime(x/i)  and x%i==0  and i!=(x/i) )num[cnt++]=x/i ;//, cout<<x/i<<" ";
    }
    if(cnt==0)num[cnt++]=x;

    //cout<<cnt<<endl;

    ll res=1;
    fr(i, cnt)
    {
        ll tmp=n, ans=0;
        while(tmp>=num[i])
        {
            tmp/=num[i];
            ans+=tmp;
        }
        //cout<<num[i]<<" "<<ans<<endl;

        res*=bigmd(num[i] , ans)%md;
        //cout<<res<<endl;

        res%=md;
    }

    cout<<res<<endl;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




