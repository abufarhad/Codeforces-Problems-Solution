#include<bits/stdc++.h>
using namespace std;
#define ll long long
double area, r;

int main()
{
    ll m, n,i ,j, p;

    cin>>n>>m;
    vector<pair<double, ll>>v;

    for(i=0;i<n;i++)
    {
        double x, y;
        cin>>x>>y>>p;
        v.push_back({ sqrt(x*x+y*y)  , p});
    }
    sort(v.begin(), v.end());

    for(i=0;i<n;i++)
    {
        if(m>=1000000)break;
        m+=v[i].second;
        r=v[i].first;
    }

    if(m>=1000000)printf("%.10llf\n", r);
    else cout<<-1<<endl;
}
