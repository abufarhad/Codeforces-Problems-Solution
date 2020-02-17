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

int main()
{
    ll t, i;
    cin>>t;
    while(t--)
    {
        ll n,j, cnt=0, cn=0;
        string s,s1;
        cin>>n>>s;

        fr(i, l(s))
        {
            if( (s[i]-'0')%2 )cnt++;
            if(cnt==2)break;
            cn++;
        }

        if(cnt<2)cout<<-1<<endl;
        else
        {
            //cout<<cn<<endl;
            for(j=0;j<=cn; j++)cout<<s[j];
            cout<<endl;
        }
    }
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


