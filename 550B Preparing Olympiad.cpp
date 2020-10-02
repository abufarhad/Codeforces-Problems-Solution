
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
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define inf                 1e18

/*-----------------------Bitmask------------------*/
int Set(int N,int pos){return N=N | (1<<pos);}
//int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/

ll ans=0;

ll n,l,r,x,c, dif;
ll a[20];

/*
void solve(ll msk, ll m)
{
    cout<<"msk "<<msk<<endl;
    if(m==n)
    {
        ll mn=inf;
        ll mx=-1;
        ll sm=0, cnt=0;

        fr(i, n)
        {
            //cout<<"chk "<<msk<<" "<<i<<endl;
            if(check(msk, i))
            {
                //cout<<"chk ====>"<<msk<<" "<<i<<endl;
                sm+=a[i];
                cnt++;

                mx=max(mx, a[i] );
                mn=min(mn, a[i]);
            }
        }

        if(cnt>1 and sm>=l and sm<=r and mx-mn>=dif )ans++;

        return ;
    }

    //cout<<"fst "<<endl;
    solve( Set(msk , m) , m+1 );
    //cout<<"Snd "<<endl;
    solve(msk, m+1);
}

*/


int main()
{
   cin>>n>>l>>r>>dif;

    fr(i, n)cin>>a[i];

    //solve(0, 0);
    ll sz=1<<n;


    fr(i, sz)
    {
        ll mn=inf, mx=-1, cnt=0, sm=0;
        fr(j, n)
        {
            //cout<<i<<" "<<j<<" "<<(1<<j)<<endl;
            ll tmp=i & (1<<j);

            ///for 2^n  process
           // if(tmp==0)cout<<"tmp" <<i<<" "<<j<<"  , ";
            if(tmp)
            {
                //cout<<i<<" "<<j<<endl;
                sm+=a[j];
                mx=max(mx, a[j]);
                mn=min(mn, a[j]);
                cnt++;
            }
        }
        cout<<endl;

       // cout<<"sm "<<sm<<endl;
       if(cnt>1 and mx-mn>=dif and sm>=l and sm<=r)ans++;
    }
    cout<<ans<<endl;

return 0;
}

