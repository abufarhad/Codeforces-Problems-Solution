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

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};




// sscanf(c, "%s %s", s,s1); // take string buffer  and then distribute all value , here take 2 value and distribute
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmod(ll b, ll p, ll md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {ll y=bigmod(b,p/2,md);return (y*y)%md;}}
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}

// ll *a=new ll[n+1]();  //automatic initialize to zero
///Every even integer greater than 2 can be represented as the sum of two primes numbers.
//count item in array : count(arr,arr+n,'I');

//bool cmp(ll i, ll j){  if( fac[i]==fac[j])return i>j;   return fac[i]< fac[j];  }

/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/


#define N 100006


int main()
{
    fast;
    ll cs;
    cin>>cs;
   while(cs--)
    {
    ll m,n,b,c,d,i,j,k,x,y,z, l, r,t;
    ll cnt=0,ans=0,sum=0, temp;

    cin>>n>>temp;
    ll  lf =temp, ri =temp;

    ll cur=0;

    fr(i, n)
    {
        cin>>t>>l>>r;

        ll t_dif=t-cur;
        lf=max(lf-t_dif , l);
        ri=min(ri+t_dif , r);

        if(lf>ri)cnt=1;
        cur=t;
    }

    if(cnt)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



