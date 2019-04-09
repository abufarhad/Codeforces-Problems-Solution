#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll  a;
    cin>>a>>b>>c;
    if(c==0)
    {
        if(a==b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
        if( (b-a )%c ==0 && (b-a )/c >=0 )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
