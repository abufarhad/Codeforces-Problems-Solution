#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
int main()
{
    ll ans,i,m,n,s,k=0,mini=100,x,y,cnt=0;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x<s)
        {
            if(y!=0)
            {
                mini=min(y,mini);
            }
        }

        if(x < s || x==s&& y==0)
        {
            k=1;
        }
    }

    if(k!=1)
    {
       cout<<"-1"<<endl;
    }
    else cout<<100-mini<<endl;
}
