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
#define scc(c)	            scanf(" %c", &c);
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
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)
#define FASTREAD            ios_base::sync_with_stdio(0);cin.tie(nullptr);

#define conv_string(n)	to_string(n)


int main()
{
    ll m,n,t,x,sz=0;
    ll cnt=0,ans=0;

    scl(n);
    set<ll>st,st1;
    vector<ll>v;

    fr(i,n)
    {
        cin>>x;
        if(x>0)
        {
            if(st1.find(x) !=st1.end())break;
            st.insert(x);
            st1.insert(x);
            sz++;
        }
        else
        {
            if(st.find(-x) !=st.end() )   st.erase(st.find(-x) );

            else {sz=1; break;}
            sz--;
        }
        if(sz==0)
        {
            v.pb(i+1);
            st1.clear();
        }
    }

    if(sz)cout<<-1<<endl;
    else
    {
        cout<<v.size()<<endl;
        cout<<v[0]<<" ";
        fr1(i,v.size()-1)cout<<v[i]-v[i-1]<<" ";
    }

return 0;
}


