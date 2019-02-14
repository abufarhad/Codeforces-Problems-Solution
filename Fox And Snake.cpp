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

#define pfi(x) printf("%d",x)
#define pfl(x) printf("%lld\n",x)
#define pfd(x) printf("%lf",x)
#define pfc(x) printf("Case %d: ",x)
#define ps printf(" ")
#define pn printf("\n")
#define pb(x) push_back(x)
#define ppb(x) pop_back(x)
#define pf(x) push_front(x)
#define ppf(x) pop_front(x)
#define in(x,y) insert({x,y})



#define pb(x) push_back(x)


 vector<string>v;
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans;
    cin>>n>>m;
    string s="#",s1="#",s2;

    for(i=0; i<m-1; i++)
    {
        s+='#';
        s1+='.';
        s2+='.';
    }
    s2=s2+'#';
    // cout<<s1<<" "<<s2<<endl;

    for(i=0; i<n; i+=4)
    {
       v.pb(s);
       v.pb(s2);
       v.pb(s);
       v.pb(s1);
    }

    for(i=0; i<n; i++)
    {
        cout<<v[i]<<endl;
    }



    return 0;
}




