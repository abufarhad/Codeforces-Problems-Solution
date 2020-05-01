


/**                     Incomplete                      **/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
ll n, prime=17 ,sum=0 ;
unsigned ll  hsha[N] , hshb[N] , base[N];

unsigned ll get(ll x, ll y)
{
    cout<<x<< " - "<<y<<endl;
    unsigned ll tmp= hsha[y]- ( hsha[x-1]* base[y-x+1]);
    return tmp;
}

bool ok(ll mid, ll sa )
{
    sum=hshb[mid];
    ll cnt=0;

    for(ll i=mid ; i<=sa; i++)
    {
        if( get(i-mid+1 , i  ) == sum )cnt++;
    }
    if(cnt>=n)return true;
    return false;
}


int main()
{
    ll i, j , b;
    b=1;
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    cin>>n;

    for(i=1; i<=N; i++)base[i]=base[i-1]*prime;

    ll sa=s.size(), sb=s1.size();

    for(i=1; i<=sa; i++)
    {
        hsha[i]=hsha[i-1]*prime;
        hsha[i]+=s[i];
    }


    for(i=1; i<=sb; i++)
    {
        hshb[i]=hshb[i-1]*prime;
        hshb[i]+=s1[i];
    }

    ll l=1, r=min(sa, sb), mid , ans=0;

    while(l<=r)
    {
        mid=(l+r)/2;

        cout<<l<<" "<<r<<" "<<mid<<endl;
        if( ok(mid, sa ) )
        {
            //debug;
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }

    cout<<ans<<endl;

    if(ans)cout<<"IMPOSSIBLE"<<endl;
    else cout<<s1.substr(0, ans)<<endl;

}

