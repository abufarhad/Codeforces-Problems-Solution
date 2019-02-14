//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll 	 long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)          for(ll i=1;i<=n;i++)
ll x[1005],a[1005],n;
bool ok(ll k)
{
    fr1(i,n)
    {
        x[i-1]=a[i]-a[i-1];
    }
    for(ll i=k;i<=n;i++){ if(a[i]!=a[i-1] +x[(i-1)%k]) return false; }
    return 1;
}

int main()
{
    ll m,i,j,k;
    cin>>n;
    a[0]=0;
    fr1(i,n)cin>>a[i];
    vector<ll>v;
    fr1(i,n){if( ok(i )==true  )v.push_back(i);  }

    cout<<v.size()<<endl;
    fr(i,v.size())cout<<v[i]<<" ";
}
