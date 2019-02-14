#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  m,n,a[200],i,b,res=1;
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i];

    vector<int>v;

    for(i=0; i<n; i++)
    {
        if(a[i] ==1)
        {
            v.push_back(i);
        }
    }

    if(v.size()==0)  cout<<"0"<<endl;
    else
    {
        for(i=1; i<v.size(); i++)
        {
            res*=v[i]-v[i-1];
        }
        cout<<res<<endl;
    }
}
