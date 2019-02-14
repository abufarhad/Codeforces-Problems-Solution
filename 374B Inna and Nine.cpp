#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define pb                push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)          for(ll i=1;i<=n;i++)


int main()
{

    ll m,n,i,j,ans=1,x,y;
    string s,s1;
    cin>>s;
    ll cnt=0;
    fr(i,s.size()-1)
    {
        x=s[i]-'0';
        y=s[i+1]-'0';
        if(x+y==9)  cnt++;
        else
        {
            if(cnt>0 && cnt%2==0) ans*=((cnt+2)/2);cnt=0;
        }
    }

    if(cnt>0 && cnt%2==0) ans*=((cnt+2)/2);

    cout<<ans<<endl;
}
