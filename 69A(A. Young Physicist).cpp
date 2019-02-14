#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i,i1,i2,i3,x=0,y=0,z=0;
    for(i=0;i<t;i++){
        cin>>i1;x=x+i1;
        cin>> i2;  y=y+i2;
        cin>>i3;  z=z+i3;
    }
    if(x==0&&y==0&&z==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
