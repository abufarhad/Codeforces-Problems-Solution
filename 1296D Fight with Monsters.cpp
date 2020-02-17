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
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
ll keep[200005];

int main()
{
    ll t;
    //while(1){
        ll m,n,b,c,d,i,j=0,k,x,y,z,l,q,r;
        ll tmp;
        ll cnt=0,ans=0,sum=0;
        scl(n);
        cin>>x>>y>>k;
        ll a[n];
        fr(i,n)
        {
            cin>>m;
            m%=(x+y);

            if(m==0 or m>x)
            {
                if(m==0)m=y;
                else m-=x;


                keep[i]=m/x;
                if(m%x)keep[i]++;

            }
        }

        asort(keep);

        fr(i, n)  if(k>= keep[i] )cnt++ ,k-=keep[i];

        cout<<cnt<<endl;
   //}


    return 0;
}
