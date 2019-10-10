#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,j,k;
    cin>>n>>k;
    ll x=(n+k);
    ll cnt=0;

    while(x !=(cnt*(cnt+1))/2 )
    {
        cnt++, x--;
    }
    cout<<n-cnt<<endl;
}
