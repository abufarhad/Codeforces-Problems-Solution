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
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

//   ios_base::sync_with_stdio(0);
//    cin.tie(0);

// sscanf(c, "%s %s", s,s1); // take string buffer  and then distribute all value , here take 2 value and distribute
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmod(ll b, ll p, ll md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {ll y=bigmod(b,p/2,md);return (y*y)%md;}}
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}

///Every even integer greater than 2 can be represented as the sum of two primes numbers.
#define N 100006
bool tf[1000005];
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;


    cin>>t;
    vector<ll>v;
    while(t--)
    {
        ll cnt=0,ans=0;
        cin>>n>>m;
        fr(i,100000)tf[i]=1;

        fr1(i, 100000)
        {
            if( tf[ (m*i)%10 ] ==0) break;
            //cout<<(m*i)%10<<" ";
            v.pb( (m*i)%10 );
            tf[ (m*i) %10 ]=0;
        }


        x=n/m;


        ll seq=x/v.size();
        ll baki=x%v.size();
        ll cal=0;
        fr(i, v.size())cal+=v[i];

       //cout<<seq<<" "<<cal<<endl;

        ans+=seq*cal;


        fr(i,baki)
        {
            ans+=v[i];
        }
        pfl(ans);

        v.clear();
    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


