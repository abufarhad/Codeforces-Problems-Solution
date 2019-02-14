#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
vector<ll>v;



int main()
{
    ll m,n,i,j=0,res,x,y,p;

    cin>>n;

    ll a[n+2],b[n],cnt=0;

    fr(i,n)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }

    for(i=0; i<n; i++)
    {
        res=accumulate(v.begin(), v.end(), 0);
        res-=a[i];
        ll mx=*max_element(v.begin(), v.end());
        res-=mx;

        //if(res%2==0  ){cnt++;b[j]=i+1,j++;}
        if(res== mx)
        {
            cnt++;
            b[j]=i+1,j++;
        }

    }

    //if(cnt==1 )cout<<"0"<<endl;
    //else
    {
        cout<<cnt<<endl;
        fr(i,cnt)
        {
            cout<<b[i]<<" ";
        }
    }
}

