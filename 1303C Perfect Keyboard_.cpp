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
vector<ll>v[26];

vector<ll>ans;
ll k=0;
void dfs(ll s,ll p)
{
    ans.pb(s);

    if(v[s].size()==1) return ;
    ll a=v[s][0];
    ll b=v[s][1];

    if(a!=p)    dfs(a,s);
    else if(b!=p)  dfs(b,s);
}

int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
        string s,s1, s2, s3, s4;
        ans.clear();
        fr(i, 26)v[i].clear();

        cin>>s;
        ll sz=l(s);

        map<char, bool>mp;

        fr(i, sz)mp[s[i] ]=true;

        if(sz==1)
        {
            pys;
            for(char ch='a' ; ch<='z' ; ch++) cout<<ch;
            pn;
            continue;
        }


        for(i=0;i+1<sz;i++)
        {
            x=s[i]-'a';
            y=s[i+1]-'a';
            v[x ].pb( y );
            v[y ].pb( x );
        }



        for(int i=0; i<26; i++)
        {
            sort(all(v[i]));
            v[i].erase(unique(all(v[i]) ),v[i].end());
        }

        vector<ll>ed;
        bool flg=true;
        fr(i, 26)
        {
            if(v[i].size()>2)  flg=false;
            if(v[i].size()==1)   ed.pb(i);
            //cout<<i<<" "<<v[i].size()<<endl;

        }


        if(ed.size()!=2) flg=0;
        if(flg==0)
        {
            pno;
            continue;
        }

        ans.pb(ed[0]);
        dfs(v[ed[0] ][0], ed[0]  );

        //cout<<ans.size()<<" "<<mp.size()<<endl;

        if(ans.size() != mp.size())
        {
           // debug;
            pno;
            continue;
        }

        pys;
        fr(i, ans.size())cout<<char(ans[i]+'a');

        //pn;
        for(char ch='a' ; ch<='z' ; ch++)
            if(mp[ch] ==false)cout<<ch;


        pn;
    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




