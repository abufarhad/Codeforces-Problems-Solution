
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
#define pr                  pair<ll, ll>


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll m,n,a,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    string s;

    set<pair<pr, pr>>st;

    cin>>s;
    n=s.size();

    ll n1=0, n2=0, n3=0, n4=0, f1=0, f2=0;
    fr(i, n)
    {
        n1=f1, n2=f2;
        if(s[i]=='N')f1++;
        if(s[i]=='S')f1--;
        if(s[i]=='E')f2++;
        if(s[i]=='W')f2--;

        if(st.find({{f1, f2 } , {n1, n2}}  )==st.end()  and  st.find({{n1, n2} , {f1, f2 }} )==st.end()  )
        {
            ans+=5;
            st.insert({{f1, f2 } , {n1, n2}}  );
            st.insert({{n1, n2} , {f1, f2 }}  );
        }
        else ans++;
    }

    pfl(ans);
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




