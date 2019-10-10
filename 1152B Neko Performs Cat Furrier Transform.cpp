#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll n,i,j,k;
    while(cin>>n)
    {
        cout<<39<<endl;
        j=19;
        while(j--)
        {
            k=log2(n)+1;
            n^=(ll) (pow(2,k)-1), n++;
            cout<<k<<" ";
        }
        cout<<log2(n)+1;
    }
}
