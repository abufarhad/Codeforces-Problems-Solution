#include<bits/stdc++.h>
using namespace std;
#define ll long
struct value
{
    int to,from;
};

int main()
{
    vector<value>save;

    ll m,n,v[5000],i;
    cin>>n;
    for(i=0;i<n;i++)cin>>v[i];

    for(i=0;i<n;i++)
    {
        ll index=i;
        for(ll j=i+1;j<n;j++)
        {
            if(v[index]>v[j]) index=j;
        }

        if(index!=i)
        {
            value tmp;
            tmp.from=i;
            tmp.to=index;

            save.push_back(tmp);


            ll tmp2=v[i];
            v[i]=v[index];
            v[index]=tmp2;

        }
    }

    cout<<save.size()<<endl;
    for(i=0;i<save.size();i++)
    {
        cout<<save[i].from<<" "<<save[i].to<<endl;
    }
}
