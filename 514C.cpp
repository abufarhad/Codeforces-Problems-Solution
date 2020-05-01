
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
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

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
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


ll const N = 6e5+100;

vector<string> v[N];
map<string , ll> mp;

int main()
{

    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt;
    string s,s1, s2, s3, s4;
    scanf("%lld%lld", &n, &q);

    while(n--)
    {
       //scanf("%s", s);
       cin>>s;
        v[s.size()].pb(s);
    }



   while(q--)
   {
       //scanf("%s", &s);
       cin>>s;


       if(mp[s ]==1)printf("YES\n");
       else if(mp[s]==-1 )printf("NO\n");
       else
       {
        cnt=0;
        ll sa=s.size();
        ll sz=v[sa].size();
       for(i=0; i<sz; i++)
       {
           cnt=0;
           for(j=0; j<sa; j++)
           {
               //cout<<v[sa][i][j] <<" "<<s[j]<<endl;

               if(v[sa][i][j] != s[j] )cnt++;
               if(cnt>1)break;
           }

           if(cnt==1){mp[s]=1 ,  printf("YES\n");  break;}
       }
        if(cnt !=1) mp[s]=-1, printf("NO\n");
      }
   }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




