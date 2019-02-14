#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll m,n,a,b,ans,i;
    cin>>n;
    for(i=2; i*i<=n; i++)
    {
        while( n%(i*i)==0) n/=i;
    }
    cout<<n<<endl;
    return 0;
}
