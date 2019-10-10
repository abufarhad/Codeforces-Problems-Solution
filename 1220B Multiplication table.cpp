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
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")


int main()
{
      ll m,n,t,b,c,d,i,j,k=0,x,y,z,l,q,r;

      ll cnt=0,ans=0, gcd;
      scl(n);
      ll a[n][n];
      fr(i, n)fr(j,n)cin>>a[i][j];

      gcd=__gcd(a[0][1], a[0][2]  );
      for(i=2;i<n;i++)  gcd=__gcd(gcd, a[0][i]);
     // pfl(gcd);



        fr1(i, sqrt(gcd))
        {
            if(gcd%i==0)
            {
                ll a0=i;
                ll a1=a[0][1]/a0;
                ll a2=a[0][2]/a0;
                //cout<<" 1st "<<a1<<endl;
                if(a1*a2==a[1][2]){k=a0; break;}

                a0=gcd/i;
                a1=a[0][1]/a0;
                a2=a[0][2]/a0;
                //cout<<" 2nd "<<a1<<endl;
                if(a1*a2==a[1][2]){k=a0; break;}
            }
        }

        ll ar[3005];
        ar[0]=k;
        fr1(i,n-1)ar[i]=a[0][i]/k;

        fr(i,n)cout<<ar[i]<<" "; pn;
return 0;
}

