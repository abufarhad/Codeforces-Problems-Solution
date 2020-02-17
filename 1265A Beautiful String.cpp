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
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei :( , I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;


#define conv_string(n)	to_string(n)

#define N 100006

int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s, s2, s3, s4;
    ll cnt=0;
    cin>>s;
    ll sz=s.size();

    if(s[0]=='?' and sz>1)
    {
        if(s[1]=='a')s[0]='b';
          if(s[1]=='b')s[0]='c';
            if(s[1]=='c')s[0]='a';
             if(s[1]=='?')s[0]='a';
    }
    else  if(s[0]=='?' )s[0]='a';

    //cout<<"str "<<s<<endl;

    for(i=1; i<sz-1; i++)
    {
        if(s[i]=='?')
        {
            //cout<<i<<endl;
            if( ( (s[i-1]=='a' and s[i+1]=='b' ) or(s[i-1]=='b' and s[i+1]=='a' ) ))s[i]='c';
            else if(( (s[i-1]=='c' and s[i+1]=='b') or (s[i-1]=='b' and s[i+1]=='c') ) )s[i]='a';
            else if(( (s[i-1]=='c' and s[i+1]=='a') or (s[i-1]=='a' and s[i+1]=='c') ) )s[i]='b';

            else if((s[i-1]=='a' and s[i+1]=='?') )s[i]='b';
             else if((s[i-1]=='b' and s[i+1]=='?') )s[i]='c';
              else if((s[i-1]=='c' and s[i+1]=='?') )s[i]='a';


              else if((s[i-1]=='a' and s[i+1]=='a') )s[i]='b';
              else if((s[i-1]=='b' and s[i+1]=='b') )s[i]='c';
              else if((s[i-1]=='c' and s[i+1]=='c') )s[i]='a';
        }
        //cout<<"s "<<s<<endl;
    }

    if(s[sz-1]=='?' )
    {
        if(s[sz-2]=='a')s[sz-1]='b';
          if(s[sz-2]=='b')s[sz-1]='c';
            if(s[sz-2]=='c')s[sz-1]='a';
    }

   //cout<<s<<endl;

    fr(i, sz-1) if(s[i] ==s[i+1])cnt=1;

    if(cnt)cout<<-1<<endl;
    else cout<<s<<endl;

    }
return 0;
}

