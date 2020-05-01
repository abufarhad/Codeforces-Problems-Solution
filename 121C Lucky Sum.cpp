//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back


vector<ll>v;
ll func(ll n)
{
    cout<<"I am here"<<endl;

    ll res=0;
    fr1(i, v.size())
    {
        if(n>0)
        {
            ll tmp=min(v[i]-v[i-1], n );
            res+=tmp*v[i];              //Tmp= Number of elements on v[i-1] to v[i] , so we don't need to calculate iteratively just multiply enough though
            n-=tmp;
            //cout<<tmp<<" "<<v[i]<<" "<<v[i-1]<<" "<<n<<endl;
        }
    }
    return res;
}

int main()
{

    ll m,n,t,b,c,d,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(l); scl(r);
      v.pb(4), v.pb(7);
      ll i=0;
     while(1)
     {
         q=v[i];
         if(i>1000000000 or q>r)break;
         v.pb(q*10+4), v.pb(q*10+7);
         i++;
     }
     v.pb(0);
     sort(v.begin(), v.end());

     pfl( func(r)-func(l-1)  );

return 0;
}




