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
    ll t;
    cin>>t;
    while(t--)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    cin>>n>>k>>s;

    s1="RGB";
    ll best=k;
    fr(i, 3)
    {
        ll err_cnt=0;
        fr(j, k)if( s[j] != s1[(i+j)%3 ] ) err_cnt++;

         best=min(best , err_cnt);
         for(j=k; j<n ; j++ )
         {
             if(s[j] != s1[(i+j)%3 ] )err_cnt++;
             if( s[j-k] != s1[(i+j-k)%3 ] )err_cnt--;       /* subtract one from the count of errors if the first position -
                                                                           in the window causes an error */

             best=min(best , err_cnt);
         }
    }

    cout<<best<<endl;
    }
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




