#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cn=0,ans=0;
    cin>>m>>n>>x;
    i=m%x, j=n%x;
    ans=(i+j)/x;
    if( ans >=1 )
        cn=x- max(i,j);
    ans+=(m/x + n/x );
    cout<< ans <<  " "<<cn<<endl;

    return 0;
}





