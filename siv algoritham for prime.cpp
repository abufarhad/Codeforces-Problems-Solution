#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 100000000


/*
ll p[Max],k=1;
vector<bool > a(100000000, true);


ll sieve( )
{
    ll i,j;
    a[0]=a[1]=false;

    for(i=4; i<=Max; i+=2)
    {
        a[i]=false;
    }
    for(i=3; i<=sqrt(Max); i+=2)
    {
        for(j=i*i; j<=Max; j=j+2*i)
        {
            a[j]=false;
        }
    }
    p[0]=2;

    for(i=3; i<=Max; i+=2)
    {
        if(a[i]==true)
        {
            p[k]=i;
            //cout<<p[k]<<" ";
            k++;
        }
    }
}


/*
bool a[Max];
ll sieve(ll n)
{
    ll i,j;

    memset(a,true ,sizeof(a));

    for ( i=2; i*i<=n; i++)
    {
        if(a[i]==true)
        {
            for( j=i*2; j<=n; j += i)
                a[j]=false;
        }
    }

    ll k=1;
    for(i=2; i<=Max; i++)
    {
        if(a[i]==true)
        {
            p[k]=i;
            //cout<<i<<" ";
            k++;
        }
    }
}
*/


bool prime[M];
int p[M];

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
    p[0]=2;

    for(i=0; i<=M; i++)
    {
        if(prime[i]==0)
        {
            p[k]=i;
           // cout<<p[k]<<" ";
            k++;
        }
    }
}


int main()
{
    ll t,n;
    sieve( );
    cin>>t;

    while(t--)
    {
        cin>>n;
        cout<<p[n]<<endl;
    }
    return 0;
}


