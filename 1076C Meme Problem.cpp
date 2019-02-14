#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)

int main()
{
    ll m,n,i,j,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double mid,low=0, high=sqrt(n)+1e-6;
        k=100;
        while( k--)
        {
            mid=(low+high)/2;
            if(mid *(n-mid) > n) high=mid;
            else low=mid;
        }
        //cout<<mid<<endl;

        if(abs(mid*(n-mid) - n ) <1e-6 )
            printf("Y %.10lf %.10lf\n",mid,n-mid);
        else cout<<"N"<<endl;
    }

}
