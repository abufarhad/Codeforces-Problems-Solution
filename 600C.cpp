#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
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
ll cnt[27];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cn=0,ans=0,sum=0 ;
    cin>>s;
    n=l(s);

    fr(i,n)  cnt[s[i] -'a']++;
    set<ll>st;
    fr(i, 26)if(cnt[i]%2)st.insert(i);


    while(st.size()>1)
    {
        ll u=*st.begin() , v=*st.rbegin();
        st.erase(u),
        st.erase(v);
        cnt[u]++, cnt[v]--;
    }

    ll u;
    if(st.size())u=*st.begin();


    fr(i, 26)
    {
        ll half= cnt[i]/2;
        fr(j, half)s1+=char (i+'a');
    }

    for(i=25; i>=0;  i--)
    {
        ll half= cnt[i]/2;
        fr(j, half)s2+=char (i+'a');
    }

    s3=char (u+'a');

    //cout<<s1<<" - "<<s3 <<" "<<s2<<endl;

    if(st.size()) s=s1+s3+s2;
    else s=s1+s2;

    cout<<s;pn;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




