#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,i,k,j;
    cin>>n;
    ll a[n+1];

    fr(i,n)cin>>a[i];
    string s;

    i=0,j=n-1;
    ll last=0;

    while(i <=j )
    {
        if( a[i] <=last && a[j]<=last ) break;
        if((a[i]<=a[j] && a[i] > last  ) || ( a[j]<=a[i] && a[j]<=last ))
        {
           // cout<<last<< " ";
            s+='L';
            last=a[i];
            i++;
        }
        else
        {
            //cout<<last<< " ";
            s+='R';
            last=a[j];
            j--;
        }
    }
    cout<<s.size()<<endl<<s;
}
