//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long
#define fr(i,n)        for(ll i=1;i<=n;i++)
#define M 1000000

bool prime[M];
int p[M];

void sieve()
{
    ll i,j;
    prime[0]=prime[1]=1;
    for(i=4; i<=M; i+=2) prime[i]=1;
    for(i=3; i<=sqrt(M); i+=2)
    {
        if(i<=sqrt(M) && !prime[i])
        {
            for(j=i*i; j<=M; j+=2*i) prime[j]=1;
        }
    }

/// ***precalculation ->Difference calculate between two prime ***

    ll cur=100003;
    for(i=100000; i>=0; i--)
    {
        if(!prime[i]) cur=i;
        p[i]=cur-i;
    }

}

int main()
{
    ll  m,n,t,b,c,d,i,j,k,r,ans;


    sieve();
    ll   g[505][505], sum;
    while(cin>>r>>c)
    {
        fr(i,r)
        fr(j,c)
        cin>>g[i][j], g[i][j]=p[ g[i][j] ];

//        fr(i,r){
//        fr(j,c)
//        cout<<g[i][j] <<" - ";}

        ll mini = 10000000;

        fr(i,r)
        {
            sum=0;
            fr(j,c)
            sum+=g[i][j]; //cout<<g[j][i]<<" "<<sum<<endl;}
            mini=min(mini, sum);
        }
        //cout<<endl<<mini<<endl;

        fr(i,c)
        {
            sum=0;
            fr(j,r)  sum+=g[j][i]; // cout<<g[j][i]<<" "<<sum<<endl;}
            mini=min(mini, sum);
        }

        cout<<mini<<endl;
    }
}
