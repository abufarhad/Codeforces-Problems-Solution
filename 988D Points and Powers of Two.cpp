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
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define debug           printf("I am here\n")
#define inf             (1<<28)
int main()
{
    ll m,n,k,l,i,j,ans=0,pow2[35],paisi;
    fr(i,32)
    {
        pow2[i]=1ll<<i;
    }

    vector<ll>v;
    cin>>n;

    fr(i,n)
    {
        cin>>k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());

    ll p=v[0], q=inf;

    //fr(i,n)cout<<v[i]<<" ";

    fr(i,n)
    {
        fr(j,32)
        {
            ll x=v[i]-pow2[j];
            ll y=v[i]+pow2[j];

            ll paisi_x=binary_search(v.begin(), v.end(), x);
            ll paisi_y=binary_search(v.begin(), v.end(), y);

            if(paisi_x && paisi_y)
            {
                cout<<"3"<<endl;
                cout<<v[i]<<" "<<x<<" "<<y<<endl;
                return 0;
            }
            if(paisi_x)
            {
                p=v[i], q=x;
            }
            else if(paisi_y)
            {
                p=v[i], q=y;
            }
        }
    }

    if(q!=inf)
    {
        cout<<"2"<<endl;
        cout<<p<<" "<<q<<endl;
    }
    else
    {
        cout<<"1"<<endl;
        cout<<p<<endl;
    }
}
