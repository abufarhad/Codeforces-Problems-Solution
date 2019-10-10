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
map<ll,ll>mp;
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,g,l,q,r;
    string s;
    cin>>n>>s;
    stack<char>s1;
    s+="4";

    fr(i, l(s))
    {
        if(s[i]==')')
        {
            x=i;
            break;
        }
    }
    for(i=s.size(); i>=0; i--)
    {
        if(s[i]=='(')
        {
            y=i;
            break;
        }
    }
    //cout<<x<<" "<<y<<endl;
    if(y>x  )
    {
        s.erase(s.begin()+x );
        s.erase(s.begin()+(y-1) );
    }
   // cout<<s.size()<<" "<<s<<endl;


    if(s.size()-1==0)cout<<"Yes"<<endl;
    else
    {
        s.erase( s.begin()+ (s.size()-1 ));
       // cout<<s<<endl;
        for(i=0; i<s.size(); i++)
        {
            if( !s1.empty() &&   (s[i]==')' && s1.top()=='(') )
                s1.pop();
            else
                s1.push(s[i]);
        }



        if(s1.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}

