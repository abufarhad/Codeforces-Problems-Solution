
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long




bool v[10000]={0};

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans,cnt=0;

    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        cin>>x>>y;
        for(j=x; j<=y; j++)
           {
               v[j]=true;
           }
    }


    for(i=1; i<=m; i++)
    {
        if(v[i]==false)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    for(i=1; i<=m; i++)
    {
        if(v[i]==false)
        {
            cout<<i<<" ";
        }
    }


    return 0;
}
