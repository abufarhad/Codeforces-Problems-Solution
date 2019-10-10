#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool is_prime(ll n)
{
 for(ll i=2;i*i<=n;i++)if(n%i==0){return 0;break;} return 1;
}
int main()
{
int n;cin>>n; if(is_prime(n)==1)cout<<1<<endl;else if(n%2 and !is_prime(n-2))cout<<3<<endl;else cout<<2<<endl;
}

