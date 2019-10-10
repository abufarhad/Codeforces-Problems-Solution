#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long int k,a,b,c,d,e;
    while(cin>>k>>a>>b)
    {
        ll x=a/k;
        ll y=b/k;

        ll x1=(a%k);
        ll y1=(b%k);


        if(x1!=0 && y==0 ||  y1!=0 && x==0)  e=-1;
        else
        {
            e=x+y;
        }

            cout<<e<<endl;
    }
    return 0;
}
