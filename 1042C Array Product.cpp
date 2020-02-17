//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define mp                  make_pair
#define ff                  first
#define sc                  second
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};




#define N 100006

int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0, zro=0, neg=0, pos=0;
    scl(n);
    vector<pair<ll, ll> > v;
    vector<pair<ll, ll> > res1;
    vector< ll > res2;



    fr(i,n)
    {
        cin>>x, v.pb(mp(x, i) );

        if(x==0)zro++;
        else if(x<0)neg++;
        else pos++;
    }



    sort(all(v) );

   fr(i, n)cout<<v[i].ff<<" "<<v[i].sc<<endl; pn;

    vector<ll>pos_id;

    ll id, id1, zro_pos=-1;

    if(neg%2  and zro>0)
    {
        fr(i, n)
        {
            if(v[i].ff==0 and (v[i-1].ff<0   || v[i+1].ff==0 ) )
            {

            id=v[i].sc;
            id1=v[i-1].sc;

            res1.pb(mp( id, id1  ) );
            res2.pb(id);
            zro_pos=i;


            //neg--, zro--;
            //break;
            }
        }
        ///except 2 pos

        fr(i, n)
        {
            if( zro_pos==i || zro_pos==i-1)continue;
            else pos_id.pb(i);
        }

        ///entering pos
        fr(i, pos_id.size()-1)
        {
            id=v[i].sc;
            id1=v[i-1].sc;
            res1.pb( mp( id, id1));
        }
    }


    else if( neg%2==0 and zro>0)
    {
        fr(i, n)
        {
            if(v[i].ff==0 )
            {
            id=v[i].sc;
            res2.pb(id);
            zro_pos=i;
            zro--;

            break;
            }
        }

    ///except 1 pos

        fr(i, n)
        {
            if( zro_pos==i )continue;
            else pos_id.pb(i);
        }

        ///entering pos
        fr(i, pos_id.size()-1)
        {
            id=v[i].sc;
            id1=v[i-1].sc;
            res1.pb( mp( id, id1));
        }
    }

    else if(neg%2 and zro==0 and pos>0)
    {
        fr(i, n)
        {
            if(v[i].ff>0)
            {
            id=v[i-1].sc;
            res2.pb(id);
            zro_pos=i;

            neg--;
            break;
            }
        }



       ///except 2 pos

        fr(i, n)
        {
            if( zro_pos==i )continue;
            else pos_id.pb(i);
        }

        ///entering pos
        fr(i, pos_id.size()-1)
        {
            id=v[i].sc;
            id1=v[i-1].sc;
            res1.pb( mp( id, id1));
        }
    }


    else if( neg%2 and zro==0 and pos==0)
    {
        id=v[n-1 ].sc;
        res2.pb(  id );
        zro_pos=id;



        ///entering pos
        fr(i, n-2)
        {
            id=v[i].sc;
            id1=v[i-1].sc;
            res1.pb( mp( id, id1));
        }

    }
    else
    {

    }






    fr(i, res1.size())  cout<<1<<" "<<res1[i].ff +1<<" "<<res1[i].sc +1<<endl;
    fr(i, res2.size())  cout<<2<<" "<<res2[i] +1<<endl;



return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


