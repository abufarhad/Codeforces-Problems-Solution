#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    multiset<ll>s;
    ll m,n,i,j,k;
    cin>>n;
    ll b[n], a[n];
    fr(i,n)cin>>a[i];
    fr(i,n){cin>>b[i];  s.insert(b[i]); }
    fr(i,n)
    {
        auto x=s.lower_bound(n-a[i]);

        //cout<<*x<<"-- "<<endl;
        if(x==s.end()) x=s.begin();
        cout<<(*x+ a[i] )%n<<" ";
        s.erase(x);

    }
}
