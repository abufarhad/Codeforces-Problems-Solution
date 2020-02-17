//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scc(c)	    scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define all(x)                 (x).begin(), (x).end()
int main()
{
    ll m,n,i,j;
    cin>>i;

    while(i--)
    {
    vector<ll>v;
    scl(n), scl(m);

    fr(i,n)scl(j), v.push_back(j);

    sort(all(v));
    v.erase( unique(all(v)) , v.end());
    reverse(all(v));

    ll cnt=0;

    fr(i, v.size())
    {
        cout<<v[i]<<" "<<cnt*m<<" "<<v[i] - cnt*m<<endl;
        if(v[i] - cnt*m <=0 )break;
        cnt++;
    }
    cout<<cnt<<endl;
    v.clear();
    }
}
