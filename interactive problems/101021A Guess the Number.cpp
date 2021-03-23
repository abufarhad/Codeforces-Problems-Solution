#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll m,n,i,j,k;
    ll l=1, h=1000000;


    while( l !=h )
    {
        ll mid=(l+h+1)/2;
        printf("%lld\n", mid);
        fflush(stdout);

        char c[3];
        scanf("%s", c);
        if( strcmp(c, "<" )==0 )
        {
            h=mid-1;
        }
        else      l=mid;
    }
    printf("! %lld\n", l);
    fflush(stdout);
}
