//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case #"<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)




int main()
{

     //freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);

   ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        string a, b, s,s1, s2, s3, s4;
        char  ans[55][55];

        ll cnt=0,cn=0,sum=0 ;
        cin>>n>>a>>b;

        pcas(cs);

        fr(i, n)
        {
            cnt=0, cn=0;
            ll L=i  , R=i;
            fr(j, n)
            {
                 //cout<<i<<" "<<j<<endl;
                //cout<<j+1<<" "<<b[L]<<" "<<a[L+1]<<endl;

                if(i==j)ans[i][j]='Y';
                else if(j>i)
                {
                    if( L+1<n and cnt==0 and   b[L]=='Y' and a[L+1]=='Y' )
                    {
                       //cout<<j<<" "<<L<<" "<<b[L]<<" "<<a[L+1]<<endl;
                       L++;
                       ans[i][L]='Y';
                    }
                    else cnt=1 ,L++, ans[i][L]='N';

                    //cout<<j<<" L "<<L<<endl;
                }
                else
                {
                    if(R-1>=0 and cn==0 and   b[R]=='Y' and a[R-1]=='Y' )
                    {
                       //cout<<j<<" "<<R<<" -- "<<b[R]<<" "<<a[R-1]<<endl;

                       R--;
                       ans[i][R]='Y';
                    }
                    else cn=1 , R--, ans[i][R]='N';
                }

             //cout<<i<<" --- "<<j<<" "<<L<<" "<<R<<endl;
            }
        }



        fr(i, n)
        {
            fr(j, n)cout<<ans[i][j];pn;
        }

        //fr(i, 55)ans[i].clear();
    }


return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



