///*********************************************************************************************************************
///*    ############     #######              #########          ###            ###                #######              #########                     *                   *
///*    ############    ##         ##            ##             ##         ##               ##               ##          ##             ##                ##                *
///*    ##                         ##           ##           ##               ##       ##               ##              ##            ##            ##                   ##             *
///*    ##                        ##             ##          ##               ##       ##               ##             ##              ##           ##                     ##           *
///*    #########       ###########          #########          ###########           ############         ##                      ##          *
///*    #########      ############        #########           ###########          #############        ##                      ##         *
///*    ##                    ##                    ##       ##             ##         ##                ##         ##                     ##       ##                     ##          *
///*    ##                   ##                      ##      ##               ##       ##                ##       ##                        ##      ##                    ##           *
///*    ##                  ##                        ##     ##                 ##     ##                ##      ##                          ##     ##                  ##             *
///*  #####           ####                    ####  ###               ###   ###              ###   ###                         ###   ##########                 *
///														           *
///*   ******************************************************************************************************************


#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .


#define pb(x) push_back(x)

vector<ll>nd[10005];
bool vis[10005];

void  dfs(ll s)
{
    ll i;
    vis[s]=true;

    for(i=0; i<nd[i].size(); i++)
    {
        if(vis[ nd[s][i] ] ==true)
        {
            cout<<nd[s][i]<<" ";
            return;
        }
        dfs(nd[s][i]);
    }
}


int main()
{

    ll a,n,i;
    scl(n);

    for(i=1; i<=n; i++)
    {
        cin>>a;
        nd[i].pb(a);
    }

    for(i=1; i<=n; i++)
    {
        memset(vis,false,sizeof(vis));
        dfs(i);
    }

    return 0;
}




