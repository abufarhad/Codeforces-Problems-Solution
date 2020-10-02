#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
ll bigmd(ll b, ll p){  ll res=1, rem=b;  while(p)   { if(p%2==1 ) {res=res*rem;  p--;}  rem=rem*rem; p>>=1; } return res;}

int main()
{
    string s, s1;
    ll m, n, i , j, x , l, y;
    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n;

    s="codeforces";
    l=s.size();
    if(n==1) cout<<s<<endl;
    else if(n==2)cout<<s+s[l-1]<<endl;
    else if(n==3) cout<<s+s[l-1]+s[l-1]<<endl;
    else
    {
        ll tmp=1;
        y=1;
        fr1(i, 50)
        {
            tmp=bigmd(i, 10 );
            //cout<<"tmp "<<tmp<<endl;
            if(tmp<=n)
            {
                ans=tmp ;
                y=tmp;
                cnt =i ;
            }
            else
                break;
        }

        map<pair<char, ll >, ll> mp;
        fr(i, 10) mp[ {s[i], i } ]=cnt;

        if(ans<n)
        {
            for(i=9; i>=0; i--)
            {
                ans/=cnt;
                ans*=(cnt+1);
                mp[ {s[i], i } ]++;
                if(ans>=n)
                    break;
            }
        }
        fr(i, 10)  while(mp[ {s[i], i } ]-- )  cout<<s[i];

        cout<<endl;
    }

    return 0;
}




