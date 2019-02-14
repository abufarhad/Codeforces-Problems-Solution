
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sv(a) sort(a.begin(),a.end())
#define sortD(a)  sort(a,a+n,greater<int>())
#define sortA(a)  sort(a,a+n)
int main()
{
    ll ans,i,m,n,s,tomas,a,b,c,d,e;
    cin>>n;
    ll sum[1005];
    for(i=0; i<n; i++)
    {
        cin>>a>>b>>c>>d;
        sum[i]=(a+b+c+d);
        tomas=sum[0];
    }
    sortD(sum);
    for(i=0; i<n; i++)
    {
        if(sum[i]==tomas)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
}



