#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

bool isprime(ll n)
{
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}

int main()
{
    ll m,n,i,j,k ,t;

    while( cin>>n)
    {
       ll x, y;
       x=2*n;
       y=n;
       if( n%2==0 and n!=2)cout<<x<<" "<<n<<endl;
       else if(n==1)cout<<"10 9"<<endl;
       else if(n==2)cout<<"10 8"<<endl;
       else
       {
          // if(isprime(y))x++, y++;
           while( isprime(x)  or  isprime(y))x++, y++;
           cout<<x<<" "<<y<<endl;
       }
    }
}
