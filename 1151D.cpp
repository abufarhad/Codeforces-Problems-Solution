
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())

int main()
{
    ll i, j, n, m;
    cin>>n;
    ll sum=0;
    ll c[n];

    fr(i, n)
    {
        ll x, y;
        cin>>x>>y;

        sum+=(y*n - x );
        c[i]=x-y;
    }

    asort(c);
    fr(i, n)
    {
        sum+=(c[i] *(n-i)  );
    }

    cout<<sum<<endl;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




