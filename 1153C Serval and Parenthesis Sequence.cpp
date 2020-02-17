#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    while(1)
    {
     string s;
     cin>>n>>s;
     l=0,r=0;
     ll cnt=0;
    if(n%2)cnt=1;
    else
    {
        x=y=n/2;
        fr(i,n)
        {
            if(s[i]=='(')x--;
            else if(s[i]==')')y--;
        }

        if(x<0 or y<0)cnt=1;
        else
        {
            ll sum=0;
            fr(i,n)
            {
                if(s[i]=='?')if(x)s[i]='(', x--;else s[i]=')';
                if(s[i]=='(')sum++; else sum--;

                if(sum<=0  and i!=n-1)cnt=1;
            }
        }
    }
    if(cnt)cout<<":("<<endl;
    else fr(i,n)cout<<s[i];
    }

return 0;
}


