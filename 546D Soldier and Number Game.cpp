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
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define M 5000005

bool prime[M];
int p[M];
ll k=0;
ll cnt=0, total[ 5000005], mp[ 5000005];

/* We just pre-calculating all numbers minimam prime divisor that take like nlogn time and calculating all numbers factors
 o(nlogn) time   */

void sieve()
{
    ll i,j;
    fr(i,5000005)mp[i]=INT_MAX;

    prime[0]=prime[1]=1, mp[2]=2;
    for(i=4; i<=M; i+=2) prime[i]=1, mp[ i]=2;
    ll z;
    for(i=3; i*i<=M; i+=2)
    {
        z=i;
        if( !prime[i])
        {
            mp[i]=i;
            for(j=i*i; j<=M; j+=2*i) prime[j]=1, mp[ j]= min( mp[j], i );
        }
    }
    p[0]=2;

    for(i=z; i<=M; i++)
    {
        if(prime[i]==0)
        {
            p[k]=i;
            mp[i]=i;
            //cout<<p[k]<<" ";
            k++;
        }
    }
    //cout<<"k "<<k<<endl;

    //fr(i, 100)cout<< mp[i ]<<" ";
}


void factor( )
{
    for( ll i=2; i<5000005;i++ )
     {
        ll num=i;
        while(num>1 ) cnt++,  num/= mp[num ];

        if(num>1)cnt++;
        total[i]=total[i-1]+ cnt;
        //cout<<i<<" "<<cnt<<" "<<total[i]<<endl;
        cnt=0;
    }
}

int main()
{

    ll m,n,t,b,c,d,i,j,x,y,z,l,q,r;
     sieve();

     factor();

      //fr(j, k)cout<<p[j]<<" ";
     // pn;

      ll cnt=0,ans=0;
      scl(n);

      for(i=0;i<n;i++)
      {
          scl(x), scl(y);
          pfl(total[x]- total[y] );
      }

return 0;
}





