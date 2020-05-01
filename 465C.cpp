
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


#define N 100006

int main()
{
    fast;
    ll t;
    ll i, m,n,p,q,r;
    string s,s1, s2, s3, s4;
    while(cin>>n>>p>>s)
    {
    i=n-1 , s[i]++;
    while(i>=0 and i<n)
    {
        if(s[i] > 'a'+p-1  ) s[i]='a' , i--, s[i]++;
        else if(i>0 and s[i]==s[i-1] )s[i]++;
        else if(i>1 and s[i]==s[i-2] )s[i]++;
        else i++;
    }
    if(i<0)pno;
    else cout<<s<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



