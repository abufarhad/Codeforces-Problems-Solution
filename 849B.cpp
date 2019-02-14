#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int n, a[1010];
bool isparallel(double slop)
{
    set<double>s;
    for(int i=0; i<n; i++)
    s.insert(a[i]-slop*i);    ///y=mx+c  c=y-mx
    return (int) s.size()==2 ;
}

int main()
{
    ll m,i,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<< (isparallel(a[2]-a[1]) || isparallel(a[3]-a[2]) || isparallel((a[3]-a[1])/2.0)?"Yes" : "No")<<endl;
    ///m=(y2-y2)/(x2-x1)
}
