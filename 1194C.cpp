
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
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

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



#define N 30
ll cnts[N] , cntt[N];

int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4, t, p;

    mem(cnts, 0);
    mem(cntt, 0);
    ll ans=0,sum=0, flg=0;

    cin>>s>>t>>p;

    s1=s+p;
    fr(i, l(s1))cnts[s1[i]-'a']++;
    fr(i, l(t))cntt[t[i]-'a']++;

    fr(i, l(t)) { if(cnts[t[i]-'a' ] < cntt[t[i]-'a']  ){flg=1; break;}}

    if(!flg)
    {
        ll sz=0;
        fr(i, l(t))
        {
            if(s[i] != t[i]) s.insert(i , 1, t[i] );
        }
        //cout<<s<<" "<<t<<endl;
        if(s==t)pys;
        else pno;
    }
    else pno;



    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




