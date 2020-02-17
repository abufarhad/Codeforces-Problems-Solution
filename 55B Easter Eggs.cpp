
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
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1="GBIV" , s="ROYGBIV";

    scl(n);

    fr(i, n-7) s+=s1[i%4];

    cout<<s<<endl;

return 0;
}


