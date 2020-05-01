
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)


int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,sum=0;
    scl(n);
    ll a[n];

    fr(i, n)
    {
        cin>>a[i];
        if(a[i]%a[0])cnt=1 ;
    }
    if(!cnt){ cout<<2*n<<endl; fr(i, n)cout<<a[i]<<" "<<a[0]<<" ";}
    else cout<<-1<<endl;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




