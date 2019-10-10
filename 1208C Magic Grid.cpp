#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pn                  printf("\n")
ll a[1001][1001];

int main()
{
    ll m,n,i,j;
    cin>>n;
    ll cnt=0;
    fr(i,n)
    {
        fr(j,n)
        {
            a[i][j]=cnt;
            if(cnt+2==(n*n ))cnt=1;
            else cnt+=2;

        }
        //pn;
    }

    fr(i,n){fr(j,n){cout<<a[i][j]<<" ";}pn;}

}
