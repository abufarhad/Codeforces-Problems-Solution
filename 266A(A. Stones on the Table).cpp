#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int i,n,cnt=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1]) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
