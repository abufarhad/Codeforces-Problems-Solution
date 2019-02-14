#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,arr[105], total=0,total1=0,mx=-10;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        total+=arr[i];
        mx=max(mx,arr[i]);
    }

    for(i=0; i<n; i++)
    {
        total1+=(mx-arr[i]);
    }

    for(i=0;; i++)
    {
        if(total1> total)
        {
            cout<<mx<<endl;
            break;
        }
        else
        {
            total1+=n,mx++;
        }
    }

}
