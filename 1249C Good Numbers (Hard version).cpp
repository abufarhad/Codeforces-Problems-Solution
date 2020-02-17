#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,j,k;
    cin>>k;
    while(k--)
    {
        cin>>n;
        ll res=1, p=3;
        while(res<n)
        {
            res+=p;
            p*=3;
        }
        while(p)
        {
            if(res-p >=n)res-=p;
            p/=3;
        }
        cout<<res<<endl;
    }
}
