#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


ll bigmd(ll n, ll p)
{
    if(p==0) return 1;
    if(p%2)  return (n%md)*bigmd(n, p-1)%md;
    else
    {
        ll tmp=bigmd(n, p/2)%md;
        return (tmp*tmp)%md;
    }
}


int main()
{
    fast;
    ll m,n,c,d,i,j,k,x,y,z,l,q,r;

    while(cin>>n>>k)
    {
        ll cnt=1,ans=0,sum=0;
        ll a[n];

        fr1(i,n)cin>>a[i], sum+=a[i];

        fr1(i, n)a[i]=sum-a[i];
        sort(a+1, a+n+1);

        /*
        x= 1/(3^1) + 1/(3^2) + 1/(3^2)
          = ( 3^(6-1) + 3^(6-2) +3^(6-3) ) / ( 3^(1+2+3) )
          = 3^3 ( 1 + 3^1 + 3^2)  / 3^6

          do common until not got a point where not do this operation
          -one thing remember nominator power must be less then or equal to sum
          So, gcd must be the nominator
        */

        for(i=2; i<=n+1; i++)
        {
            cout<<a[i-1]<<" "<<a[i]<<endl;

            if(a[i-1] !=a[i])
            {
                cout<<"cnt " <<cnt<<endl;
                if(cnt%k==0)
                {
                    cout<<"i cnt"<<i<<" "<<cnt<<endl;

                    cnt/=k;
                    a[i-1]++;
                    i--;
                }
                else
                {
                    ans=a[i-1];
                    break;
                }
            }
            else  cnt++;
        }

        ans=min(ans, sum);
        ans=bigmd(k, ans);
        cout<<ans<<endl;
    }
    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

