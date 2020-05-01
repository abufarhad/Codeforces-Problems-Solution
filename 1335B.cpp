#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;

    ll a;
    cin>>n>>a>>b;
    char ch='a';

    fr(i, b)s+=ch, ch++;
    ll baki=a-b;

    ch--;
    fr(i, baki)s+=ch;

    baki=n-a;

    fr(i, baki)
    {
        s+=s[i%s.size()];
    }

    cout<<s<<endl;

    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




