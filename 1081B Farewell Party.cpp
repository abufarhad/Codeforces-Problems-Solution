#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define debug           printf("I am here\n")

ll cnt[100005];
int main()
{
    ll n,m,i,j,k=1,sum=0,cnt0=0,cnt1=0,cnt=0;
    cin>>n;
    ll a[n+1];
    set<ll>s;
    fr(i,n)
    {
        cin>>a[i];
        if(a[i]==0)  cnt0++;
        if(a[i]==1)  cnt1++;
        else cnt++;
        s.insert(a[i]);
    }
    vector<ll>v;
    vector<ll>v1;
    set< ll > :: iterator it; for(it = s.begin(); it != s.end(); it++) {  sum+=*it; v.push_back(*it);}

    if(cnt0>=1&& cnt0!=n) cout<<"Impossible"<<endl;
    else if(cnt0==n)
    {
        cout<<"Possible"<<endl;
        fr(i,n)cout<<"1"<<" ";
        return 0;
    }
    else if(cnt1==n )
    {
        cout<<"Possible"<<endl;
        for(i=1;i<=n;i++) cout<<i<<" ";
        return 0;
    }
    else if(s.size()==n || sum>n) cout<<"Impossible"<<endl;
    else
    {
        cout<<"Possible"<<endl;
        fr(i,v.size())
        {
            for(j=0;j<v[i];j++) v1.push_back(k);
            k++;
        }

        if(v1.size()==n)  fr(i,v1.size())  cout<<v1[i]<<" ";
        else
        {
            fr(i,v1.size())  cout<<v1[i]<<" ";

            sort(v1.begin(),v1.end());
            ll p=v1[v1.size()-1 ];

            if(p==n) p--;
            else if(p==2)p++;
            //debug;
            //cout<<p<<endl;
            ll f=n-v1.size();
           fr(i,f)cout<<p<<" ";
        }
    }

}
