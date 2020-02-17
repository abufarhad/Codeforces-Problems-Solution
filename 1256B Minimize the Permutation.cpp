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
#define scc(c)	            scanf(" %c", &c);
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
#define pn                  printf("\n")
#define debug               printf("I am here\n")

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,t,i,j,k,x,y,z,l,q,r;
        cin>>n;
        ll a[n+1];
        ll pos;

        fr1(i,n)scl(a[i]);

        ll op=n-1;
        bool vis[105];

        memset(vis, 0, sizeof(vis));
        while(op)
        {
            pos=0;
            fr1(i,n)
            {
                //fr1(k, n)cout<<a[k]<<" - "; pn;
                if(a[i] !=i )
                {
                    fr1(j,n)
                    {
                        if(a[j]==i   and vis[j]==0)
                        {
                            vis[j]=1;
                            pos=j;
                            break;
                        }
                    }
                    if(pos)break;
                }
            }

            if(pos){ if(a[pos] < a[pos-1])swap(a[pos], a[pos-1]); }
            op--;
        }

        fr1(i,n)cout<<a[i]<<" ";
        pn;
    }

    return 0;
}




