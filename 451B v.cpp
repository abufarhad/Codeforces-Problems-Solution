#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb push_back

ll m,n,i,j=0,x,y;
int main()
{
    cin>>n;

    ll a[n], b[n];
    fr(i,n)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    sort(a,a+n);
    fr(i,n)  if(a[i] !=b[i]) {x=i; break;}

    for(i=n-1; i>=0; i--) if(a[i]!=b[i]) {y=i; break;}

    reverse(b+x, b+y+1);

    fr(i,n)  if(a[i]!=b[i])  j=1;

    if(j)  cout<<"no"<<endl;
    else cout<<"yes"<<endl<<x+1<<" "<<y+1<<endl;

}

