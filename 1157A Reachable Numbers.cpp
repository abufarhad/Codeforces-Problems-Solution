#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,k=0;
    cin>>n;
    while(n>9)
    {
        k++,n++;
        while(n%10==0)n/=10;
    }
    k+=9;
    cout<<k;
}
