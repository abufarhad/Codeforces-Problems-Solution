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
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)            memset(a, i, sizeof(a))

int main()
{
     ll  n,t,c,d,i,j,k,x,y,z,l,q,r;

      scl(n);scl(k);
      ll a[n+1], b[n+1];

      fr1(i,n) cin>>a[i], b[i]=a[i];


      sort(a+1, a+n+1);
      ll m[n+1]={0};

      fr1(i,k)
      {
          cin>>x>>y;
          if( b[x] >b[y] ) m[x]++;
          if( b[y]> b[x] ) m[y]++;
      }



      fr1(i,n)
      {
          ll  inx=upper_bound( a+1, a+n+1, b[i]-1)- (a+1);
          //cout<<b[i]-1<<" "<<inx<<endl;
          cout<<inx-m[i]<<" ";
      }

return 0;
}


