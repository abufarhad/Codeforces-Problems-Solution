
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


#define N 100006
bool chk[1005];
int main()
{
    fast;
    ll t;


    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    cin>>n>>m;
    string s,s1, s2, s3, s4;
    ll cnt=0,sum=0;

    string st[n];

    fr(i,n)  cin>>st[i];

    vector<string>ans, v, v1, v2;

    fr(i, n)
    {
        fr(j, n)
        {
            s2=st[j];
            reverse(all(s2) );

            if (i !=j and chk[i]==false and chk[j]==false and st[i] == s2 )
            {
               // cout<<st[i]<<" "<<s2<<endl;
                v.pb(st[i]), v1.pb(st[j]);

                chk[i]=true;
                chk[j]=true;
                break;
            }
        }
    }

    fr(i, n)
    {
    s2=st[i];
    reverse(all(s2) );

    if(chk[i]==false  and st[i] == s2 ) {  v2.pb(st[i] );  break;}
    }

    //debug;

    //cout<<v.size()<<" "<<v1.size()<<" "<<v2.size()<<endl;
    if(v.size()==0 and v2.size()==0){cout<<0<<endl; }
    else
    {
    if(v.size() ) fr(i, v.size())ans.pb(v[i] );

    if(v2.size() )ans.pb(v2[0] );

    if(v1.size() )for(i=v1.size()-1; i>=0; i--)ans.pb(v1[i] );


    fr(i, ans.size())s3+=ans[i];
    cout<<s3.size()<<endl<<s3<<endl;

    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



