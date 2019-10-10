#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
ll n;
void solve()
{
    string s="133";
    ll three=2;
    ll lagbe=0;

    for(ll i=2;;i++)
    {
        ll cnt=(i*(i-1))/2;
        if(cnt<=n)three=i; else break;
    }

    ll baki=n- (three*(three-1)/ 2);
    three-=2;
    cout<<s;
    fr(i,baki)cout<<7;
    fr(i, three)cout<<3;

    cout<<7<<endl;

}

int main()
{
    ll m,i,j,k;
    cin>>k;
    while(k--)
    {
        cin>>n;
        solve();
    }

}
