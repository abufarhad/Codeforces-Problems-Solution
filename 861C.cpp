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
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define N 200006


int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>s;

        map<char , ll> mp;
        for(char ch='a'; ch<='z'; ch++)
        {
            if(ch=='a'  or ch=='e'  or ch=='i'  or ch=='o'  or ch=='u' )mp[ch]=0;
            else mp[ch]=1;
        }
        n=s.size();

        vector<ll>v;
        fr(i , n)
        {
            if(mp[ s[i] ] )cnt++;
            else cnt=0;

            if(cnt==3)
            {
                set<char>st;
                j=i;
                while(cnt--)st.insert( s[j] ) , j--;

                if(st.size()>1 )v.pb(i)  , cnt=1;
                else cnt=2;
            }
        }

        ll sz=0;
        if(v.size())sz=v.size();

        j=0;
        fr(i , n)
        {
            if(sz>0 and  i==v[j] )cout<<" "<<s[i] , j++ , sz--;
            else cout<<s[i] ;
        }

    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



