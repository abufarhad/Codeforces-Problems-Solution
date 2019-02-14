#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int a=1,b=2,c=3,d=4,e=5;
    cin>>n;
    for(i=0; ;i++){
        a=a+5; b=b+5; c=c+5; d=d+5;e=e+5;
    if(n==1||n==a){ cout<<"Sheldon"; break;}
        if(n==2||n==b){ cout<<" Leonard";break;}
            if(n==3||n==c){ cout<<"Penny";break;}
                if(n==4||n==d){ cout<<"Rajesh";break;}
                    if(n==5||n==e){ cout<<"Howard";break;}
    }
    return 0;
}
