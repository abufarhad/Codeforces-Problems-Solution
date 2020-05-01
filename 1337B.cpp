
#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)

#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
        string s,s1, s2, s3, s4;

        ll cnt=0,ans=0,sum=0;
        cin>>x>>n>>m;


        while(n>0 and x>0)
        {
            ll tmp=x;
            x= x/2 +10 ;
            if(x>tmp)
            {
                x=tmp;
                break;
            }

            n--;
        }
        while(m-- and x>0 )
            x-=10;

        while(n>0 and x>0)
        {
            //cout<<x<<endl;
            x=x/2 +10;

            n--;
        }

        if(x<=0)
            pys;
        else
            pno;

        //cout<<ans;pn;
    }

    return 0;
}




