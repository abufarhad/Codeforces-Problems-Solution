//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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
#define N 505
char ch[N][N];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n>>m;

    mem(ch, 1);

    fr(i, n)fr(j, m){cin>>ch[i][j]; if(ch[i][j]=='*' )cnt++;}

    fr1(i, n)
    {
        fr1(j, m)
        {
            if( ch[i][j]=='*'  and ch[i-1][j]=='*'  and ch[i+1][j]=='*'  and ch[i][j+1]=='*'  and ch[i][j-1]=='*'  )
            {

                for(x=i;x<n&&ch[x][j]=='*';x++)cn++;
                for(x=i-1;x>=0&&ch[x][j]=='*';x--)cn++;
                for(x=j+1;x<m&&ch[i][x]=='*';x++)cn++;
                for(x=j-1;x>=0&&ch[i][x]=='*';x--)cn++;

                if(cn==cnt)pys;
                else pno;
                return 0;

            }
        }
        if(cn)break;
    }

    pno;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




