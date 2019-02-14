//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll 	 long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)          for(ll i=1;i<=n;i++)
#define M 1005

bool prime[M];
ll x,n;
vector<ll>v;

void sieve()
{
    ll i,j,k=0;
    prime[0]=prime[1]=1;
    for(i=4; i<=M; i+=2) prime[i]=1;
    for(i=3; i<=sqrt(M); i+=2)
    {
        if(i<=sqrt(M) && !prime[i])
        {
            for(j=i*i; j<=M; j+=2*i) prime[j]=1;
        }
    }

    for(i=2; i<=M && i<=n; i++)
    {
        if(prime[i]==0)
        {
             x=i;
            while(x<=n){ v.push_back(x); x*=i;  }
        }
    }
}


int main()
{
    ll m ,k,i;

    cin>>n;
    sieve();
    cout<<v.size()<<endl;
    fr(i,v.size())cout<<v[i]<<" ";
}
