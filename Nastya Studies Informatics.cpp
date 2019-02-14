#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
int main()
{

    ll m,n,t,a,b,c,d,i,j,k,x,y,z,ans=0;

    cin>>a>>b>>x>>y;
    if(y%x !=0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    else
    {
        k=y/x;
        for(i=1;i<=sqrt(k);i++)
        {
            j=k/i;
            if(k%i==0 && __gcd(i,j)==1 && i*x>=a && i*x<=b && j*x>=a && j*x<=b  )
            {
                ans+=1+(i!=j);
            }
        }
    }
    cout<<ans<<endl;
return 0;
}




