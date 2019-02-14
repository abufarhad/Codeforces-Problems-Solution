#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long


bool cmp(string x, string y)
{
    return x.length()<y.length();
}


int main()
{

    ll m,n,t,b,i,j,k,x,ans,l;

    string st[1000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>st[i];
    }

    sort(st,st+n,cmp);


    for(int i=0; i<n-1; i++)
    {
        if(st[i+1].find(st[i])==string::npos)
        {
            cout << "NO";
            return 0;
        }
    }

    cout<<"YES"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<st[i]<<endl;
    }

    return 0;
}
