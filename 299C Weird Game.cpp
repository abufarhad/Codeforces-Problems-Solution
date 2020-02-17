#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb                  push_back
int main()
{
    ll m,n,i,j,k;
    string x, y;

    while(cin>>n>>x>>y)
    {
        vector<ll>eq, f, se, zro;
        ll one_one=0,one_zro=0,zro_one=0;

        fr(i,2*n)
        {
            if(x[i]=='1' and  x[i]==y[i] )one_one++;
            else if(x[i]=='1' and  y[i]=='0' )one_zro++;
            else if(x[i]=='0' and  y[i]=='1' )zro_one++;
        }
        /*
        10001001
        10101101

        After taking equal one_one , first man must take zro_one , so draw
        */

       if(one_one%2)zro_one--;

       if( one_zro==zro_one  || zro_one-1== one_zro )cout<<"Draw"<<endl;
       else if(one_zro>zro_one )cout<<"First"<<endl;
       else cout<<"Second"<<endl;

    }
}
