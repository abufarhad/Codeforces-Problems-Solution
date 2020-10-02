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
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200006
ll cnt[N]  ;
int main()
{
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cn=0,ans=0,sum=0 , two=0 , four=0;
        cin>>n;

        set<pr>st;
        fr(i,n)cin>>x, cnt[x]++ ;

        fr1(i, N)if(cnt[i] ) st.insert({  cnt[i] ,i    } );
        scl(q);

        set<pr>::iterator it;

        while(q--)
        {
            cin>>s>>x;
            st.erase({cnt[x]  , x } );

            if(s[0]=='+') cnt[x]++;
            else cnt[x]--;

            st.insert({cnt[x]  , x });

            auto it=st.rbegin();
            auto it0=*it;
            it++;
            auto it1=*it;
            it++;
            auto it2=*it;

            //cout<<st.size()<<" "<< it0.ff<<" "<<it1.ff<<" "<<it2.ff<<endl;




            if(it0.ff >=8)pys;
            else if(it0.ff>=4 )
            {
              ll baki= it0.ff-4;
              if (st.size()>=3 and    ( (  it1.ff >=2 and   baki>=2 )  or (it1.ff>=2 and it2.ff >=2 ) or  it1.ff >=4  or  it2.ff >=4)  )pys;
              else if(st.size()>=2   and ((  it1.ff >=2 and   baki>=2 ) or  it1.ff >=4 )  )pys;
              else  pno;
            }
            else pno;
        }
}
/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1


/*
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
#define N 200006


ll cnt[N]  ;
int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cn=0,ans=0,sum=0 , two=0 , four=0;
        cin>>n;

        fr(i, n)
        {
            scl(x);
            cnt[x]++;

            if(cnt[x]%2==0)two++;
            if(cnt[x]%4==0)four++;

        }

        scl(q);
        while(q--)
        {
            cin>>s>>x;

            if(s[0]=='+')
            {
                cnt[x]++;
                if(cnt[x]%2==0)two++;
                if(cnt[x]%4==0)four++;
            }
            else
            {
                if(cnt[x]%2==0)two--;
                if(cnt[x]%4==0)four--;
                cnt[x]--;
            }

            if(four>=2)pys;
            else if(four==1 and (two-2)>=2)pys;  //one four == 2 two so ,  (- 2)
            else pno;
        }
    }
}
*/
