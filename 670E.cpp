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

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
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
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 500006
ll pos[N];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,r;
    string s,s1, s2, s3, s4, q;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n>>m>>k>>s1>>q;

    mem(pos , -1);
    s='#'+s1;

    stack<ll>st;
    fr1(i, n)
    {
        if(s[i]=='(')st.push(i);
        else
        {
            ll now=st.top();
            pos[now]=i;
            pos[i]=now;
            st.pop();
        }
    }

    ll left[n+5] , right[n+5] , cur=k;

    fr1(i, n+1)left[i]=i-1;
    fr(i, n+1)right[i]=i+1;

    ll mn, mx;
    fr(i, m)
    {
        if(q[i]=='L')cur=left[cur];
        else if(q[i]=='R')cur=right[cur];
        else
        {
            mn=min(cur ,  pos[cur]);
            mx=max(cur, pos[cur]);

            right[ left[mn]  ] = right[mx];
            left[ right[mx] ]  =left[mn];

            //cout<<mn<<" "<<mx<<endl;
            cur=right[mx];
        }

        if(cur==n+1)cur=left[cur];
    }

    i=right[0];

    while(i<n+1)
    {
        cout<<s[i];
        i=right[i];
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1





