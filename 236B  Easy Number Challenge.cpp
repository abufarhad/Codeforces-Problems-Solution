#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)           scanf("%lld",&x)
#define pfl(x)           printf("%lld\n",x)
#define pn                printf("\n")
#define debug           printf("I am here\n")
#define mp               make_pair
#define ppb               pop_back
#define ps                 printf(" ")
#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)
ll d[1000005]={0};
int main()
{
    ll m,n,x,y,j,z,i,md=1073741824 ;
    while(cin>>x>>y>>z)
    {
        fr1(i,x*y*z) for(j=i;j<=x*y*z;j+=i) d[j]++;

        ll sum=0,j,k;
        vector<ll>v;
        fr1(i,x)
        {
            fr1(j,y)
            {
                fr1(k,z)
                {
                    //cout<<i<<" "<<j<<" "<<k<<endl;
                    sum+=(d[i*j*k])%md;
                }
            }
        }
        pfl(sum);
    }

}
