
#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
//using NAMspace __gnu_pbds;
//typedef tree<LL, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define LL                  long long
#define ull                 unsigned long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define sci(n)              scanf("%d", &n)
#define scii(n,m)           scanf("%d %d",&n,&m)
#define sciii(n,m,p)        scanf("%d %d %d",&n,&m,&p)
#define scs(n)              scanf("%s", n)
#define pfi(n)              printf("%d\n",n)
#define pfl(n)              printf("%I64\n",n)
#define pfs(s)              printf("%s\n",s)
#define dist2D(x1,y1,x2,y2)         ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))
#define dist3D(x1,y1,z1,x2,y2,z2)   ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2))
#define print(x)            for(int i=0;i<x.size();i++) cout<<x[i]<<" ";
#define deb(x)              cout<<#x<<" "<<x<<endl

#define FASTREAD            ios_base::sync_with_stdio(0);cin.tie(nullptr);
#define MOD                 1000000007
#define MODP                99999999999973LL
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define memo(a,b)           memset(a,b,sizeof(a))
#define INF                 1e18
#define EPS                 1e-8
#define Pi                  acos(-1)
//int Set(int mask,int pos){return mask=mask | (1<<pos);}
//int reset(int\ mask,int pos){return mask= mask & ~(1<<pos);}
//bool check(int mask,int pos){return (bool)(mask & (1<<pos));}
//LL bigmod(LL b, LL p, LL md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {LL y=bigmod(b,p/2,md);return (y*y)%md;}}
#define fr(i,n)             for (int i=0;i<n;i++)
#define N 1000006
vector<int>v[26];
int k=0;
vector<int>ans;
void dfs(int s,int p)
{
    ans.pb(s);

    if(v[s].size()==1) return ;
    int a=v[s][0];
    int b=v[s][1];

    if(a!=p)    dfs(a,s);
    else if(b!=p)  dfs(b,s);
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        for(int i=0; i<26; i++)
        {
            v[i].clear();
        }
        ans.clear();
        string str;
        cin>>str;
        int n=str.size();

        map<char,bool>Map;
        for(int i=0; i<str.size(); i++)
        {
            Map[str[i]]=true;
        }


        if(n==1)
        {
            cout<<"YES\n";
            for(char ch='a'; ch<='z'; ch++)cout<<ch;
            cout<<"\n";
            continue;
        }

        for(int i=0; i+1<n; i++)
        {
            int a=str[i]-'a';
            int b=str[i+1]-'a';
            v[a].pb(b);
            v[b].pb(a);
        }

        for(int i=0; i<26; i++)
        {
            sort(v[i].begin(),v[i].end());
            v[i].erase(unique(v[i].begin(),v[i].end()),v[i].end());
        }

        vector<int>e;
        bool flag=true;
        for(int i=0; i<26; i++)
        {
            if(v[i].size()>2) flag=false;
            if(v[i].size()==1) cout<<i<<" ",  e.pb(i);
           //cout<<i<<" "<<v[i].size()<<endl;

        }

        cout<<endl<<e.size()<<endl;


        if(e.size()!=2)    flag=false;
        if(flag==false)
        {
            cout<<"NO\n";
            continue;
        }

        fr(i, e.size())cout<<e[i]<<" ";
        cout<<endl<<" --> "<<e[0]<<" "<<v[e[0]][0]<< endl;

        ans.pb(e[0]);

        //fr(int i=0; i<v[i].size(); i++)cout<<v[i]



        dfs(v[e[0]][0],e[0]);

         cout<<ans.size()<<" "<<Map.size()<<endl;

        if(ans.size()!=Map.size())
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES\n";
        for(int i=0; i<ans.size(); i++)  cout<<char(ans[i]+'a');

        for(char ch='a'; ch<='z'; ch++)
        {
            if(Map[ch]==false)   cout<<ch;
        }
        cout<<"\n";


    }

    return 0;
}

// LL dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* LL dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* LL dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* LL dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction
