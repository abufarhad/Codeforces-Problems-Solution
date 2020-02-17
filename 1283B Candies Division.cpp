#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005];
int main()
{
    ll i,j,k,l;
    ll t;
//    cin>>t;
//    while(t--)
//    {
        ll n;
        cin>>n;

        deque<ll>dq;
        map<ll, bool>check;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            check[a[i]]=true;
        }

        for(i=1;i<=n;i++)
        {
            if(check[i]==0)dq.push_back(i);
        }

        for(i=1;i<=n;i++)
        {
            if(a[i]==0 and !check[i] )
            if(dq.front() !=i)
            {
                a[i]=dq.front(),dq.pop_front();
            }
             else   a[i]=dq.back(), dq.pop_back();

        }

        for(i=1;i<=n;i++)
        {
           if(a[i]==0)a[i]=dq.front(), dq.pop_front();
        }

        for(i=1;i<=n;i++)
        {
           cout<<a[i]<<" ";
        }

    //}
}
