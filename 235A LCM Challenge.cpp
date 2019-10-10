#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
ll a[5];

int main()
{
   ll m,n,ans;
   while(cin>>n)
   {
    ans=0;
    if(n<3)ans=n;
    else if(n==3)ans=6;

    if(n>3)
    {
        ll tmp=(n*(n-1) )/ __gcd(n, (n-1));
        a[0]=(tmp*(n-2) )/ __gcd(tmp, (n-2) );

        ll tmp1=((n-1)*(n-2) )/ __gcd( (n-1), (n-2));
        a[1]=(tmp1*(n-3) )/ __gcd(tmp1, (n-3) );

        ll tmp2=(n*(n-2) )/ __gcd(n, (n-2));
        a[2]=(tmp2*(n-3) )/ __gcd(tmp2, (n-3) );

        ll tmp3=(n*(n-1) )/ __gcd(n, (n-1));
        a[3]=(tmp3*(n-3) )/ __gcd(tmp3, (n-3) );

        sort(a,a+4);
        ans=a[3];
    }
    cout<<ans<<endl;
}

    return 0;
}




