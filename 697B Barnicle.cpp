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
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll i,x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmod(ll b, ll p, ll md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {ll y=bigmod(b,p/2,md);return (y*y)%md;}}
#define N 100006
int main()
{
    ll m,n,t,b,d,i,j,k,y,z,l,q,pos,pose,r;

    ll cnt=0,ans=0;
    string s,x,c;
    scanf("%lld.",&m);
    cin>>s;

    vector<char>v1;
    l=s.size();

    for(i=0;i<s.size();i++)
    {
        if(s[i]=='e') {cnt++;pose=i;}
    }
    //cout<<pose<<endl;

    fr(i,l)
    {
        if(pose<i)  x+=s[i];
    }
    y=stoi(x);
    //cout<<"y ="<<y<<endl;

    for(i=0; i<y && i<pose; i++)
    {
        v1.pb(s[i]);
    }
    s.erase(pose, l);
    s.erase(0,y);

    //cout<<s<<endl;
    if(s=="0")cout<<m<<endl;
    else
    {
    cout<<m;

    if(y-pose >0)
    {
        fr(i,v1.size())cout<<v1[i];
         cout<<s;
        fr(i,(y-pose) ) cout<<"0";
    }
    else if(y-pose<0 && y!=0)
    {
        fr(i,v1.size())cout<<v1[i];
        cout<<"."<<s;
    }
    else if(y-pose==0 )
    {
        fr(i,v1.size())cout<<v1[i];
    }
    else
    {
        cout<<"."<<s;
    }

    }

    return 0;
}




