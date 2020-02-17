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
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)

#define N 1006
ll vis[N];
int main()
{
    fast;
    ll t;
    ll m,n,b,d,i,j=0,k,x,y,z,l,q,r;
    cin>>n>>m>>d;

    ll cnt=1,ans=0,sum=0, dif=0, brk=0,used=0;
    ll c[N];
    fr(i,m)cin>>c[i];

    for(i=0; i<n; )
    {
        dif=i+d -1 +c[j];  ans++;
        i=dif;

        if(ans>m) {brk=1;   break;}

        while(c[j]--)  vis[dif]=cnt, dif--;
        cnt++;
        j++;


        if(i+d>n)break;
        //used++;
    }
    cnt=-inf;

    fr1(i,n)  cnt=max(cnt, vis[i]);

   // fr1(i,n)cout<<vis[i]<<" "; pn;


    if(m>cnt )
    {
        x=m-cnt;
       //cout<<x<<endl;
        cnt=1;
        fr1(i,n)if(vis[i] !=0)vis[i]=1;

        //fr1(i,n)cout<<vis[i]<<" "; pn;

        fr1(i,n) if(vis[i]==0  and x>0 ){ x--, vis[i]=1;  }



        for(i=1; i<=n; )
        {
            if(i<n and vis[i] )
            {
                if( vis[i]==vis[i+1] )vis[i]=vis[i+1]=cnt, i+=2;
                else vis[i]=cnt, i++;
                cnt++;
            }i++;
        }
    }
    if(brk)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        fr1(i,n)cout<<vis[i]<<" ";
    }
return 0;
}
