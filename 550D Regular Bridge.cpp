#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll k;

    while(cin>>k)
    {
        ll i,j;
        if(k%2)
        {
        cout<<"YES"<<endl;
        if(k==1){cout<<"2 1"<<endl<<"1 2"<<endl;continue;}

        cout<<2*(k+2)<<" "<<k*(k+2)<<endl;


        for(i=1;i<=k+2;i++)
        {
            for(j=i+1;j<=k+2;j++)
            {
                if((j%2==1  or j==2  )and (j==i+1) )continue;

                cout<<i<<" "<<j<<endl;
                cout<<i+k+2<<" "<<j+k+2<<endl;
            }
        }

        cout<<2<<" "<<k+4<<endl;
        }
        else cout<<"NO"<<endl;
    }

return 0;
}



