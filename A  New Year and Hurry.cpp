#include<iostream>
using namespace std;
int main()
{
    int n,c,i,cnt=0,d,m=0;
    cin>>n>>c;
    for(i=1; i<=n; i++)
    {
        d=i*5;
        m=m+d;
        if((240-m)>=c)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
