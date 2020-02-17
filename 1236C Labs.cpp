//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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
#define asort(a)            sort(a,a+n)
#define tcas(i,t)           for(ll i=1;i<=t;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>n;
    vector<ll>v;
    fr1(i, n*n) v.pb(i);


    ll a[n][n];
    m=0; k=0;
    for(i =1, z=1; i<=n*n ; i+=n)
    {
        if( z%2)
        {
            for( j=n-1 ; j>=0; j--)
            {
                a[j][k]=v[ m ];
                m++;
            }
            k++;

        }
        else
        {
            fr(j, n)
            {
                a[j][k]=v[m];
                m++;
            }k++;

        }
    z++;
    }


    fr(i,n)
    {
        fr(j,n)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

