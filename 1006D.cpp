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
#define scll(n, m)              scanf("%lld%lld",&n, &m)
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
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

/*.....Kings path....*/
//ll dx[]={-1,-1,-1,0,1,1,1,0};
//ll dy[]={-1,0,1,1,1,0,-1,-1};



// sscanf(c, "%s %s", s,s1); // take string buffer  and then distribute all value , here take 2 value and distribute
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmd(ll b, ll p){  ll res=1, rem=b;  while(p)   { if(p%2==1 ) {res=res*rem%md ;  p--;}  rem=rem*rem%md; p>>=1; } return res;}

//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}


///Every even integer greater than 2 can be represented as the sum of two primes numbers.
//count item in array : count(arr,arr+n,'I');

//bool cmp(ll i, ll j){  if( fac[i]==fac[j])return i>j;   return fac[i]< fac[j];  }

/*-----------------------Bitmask------------------*/
//int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
//bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/

//__builtin_popcount(n) ;  return number of set bit // can check number is power of two because if power of two has only 1 set bit

// lower_bound = greater then or equal
// upper_bound = greater then
//lcm=max_element(dp+1, dp+m+1 )-dp;       //return the index of max elements
//itoa(a,res,10);  			   //This function convert any Decimal integer to binary, decimal , hexadecimal and octal number  ( char res[N] )

// set_intersection(v.begin(), v.end(), v1.begin(), v1.end(), inserter(v2 ,v2.begin()));
#define N 200006

int main()
{

        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        string a, b, s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>a>>b;

        fr(i, n/2)
        {

            set<char>st;
            st.insert(a[i]) ,  st.insert(a[n-i-1]);
            st.insert(b[i]) ,  st.insert(b[n-i-1]);


            //for(auto j:st)cout<<j<<" ";pn;

            if(st.size()==4)ans+=2;
            else if(st.size()==3)if(a[i]==a[n-i-1] or  b[i]==b[n-i-1] )ans+=2;else ans++;
            else if(st.size()==2)
            {
                j=n-i-1;
                if((a[i]==a[j]  and b[i]==b[j])  or (a[i]==b[j]  and b[i]==a[j])  or (a[i]==b[i]  and a[j]==b[j]) );
                else ans++;
            }

            st.clear();
        }

        if(n%2)  if(a[n/2]!=b[n/2])ans++;

        cout<<ans;pn;

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




