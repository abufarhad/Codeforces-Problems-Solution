//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;



#define ll                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)

int main()
{
    ll m,n,i,j,k,l;
    string s,s1,s2;
    while(cin>>s)
    {
        ll cntf=0,cntt=0,cnte=0,cnts=0,ans=0,sum=0;
        vector<char>v;
        l=s.size();
        fr(i,l)
        {
        if(s[i]=='(' ||s[i]=='{' ||s[i]=='[' ||s[i]=='<'  )       v.pb(s[i]);
            else
            {
                if(v.size()==0){cout<<"Impossible"<<endl; return 0;}
                else
                {
                    if( ( s[i]==')' && v[v.size()-1]=='(' )  || ( s[i]=='}' && v[v.size()-1]=='{') || ( s[i]==']' && v[v.size()-1]=='[' ) || ( s[i]=='>' && v[v.size()-1]=='<' )  );
                     else ans++; v.pop_back();
                }
            }
        }
        if(v.size()!=0) {cout<<"Impossible"<<endl;  return 0;}
        cout<<ans<<endl;
        v.clear();
    }
}
