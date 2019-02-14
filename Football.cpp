///*********************************************************************************************************************************
///*    ############            #######                 #########             ###            ###                    #######                   #########                     *                   *
///*    ############           ##         ##               ##             ##            ##               ##                   ##          ##                  ##                ##                *
///*    ##                                ##           ##              ##               ##          ##               ##                  ##            ##                 ##                   ##             *
///*    ##                               ##             ##              ##               ##          ##               ##                 ##              ##               ##                     ##           *
///*    ##                              ##               ##            ##             ##             ##               ##                ##                ##               ##                     ##          *
///*    #########              ###########             #########               ###########              ############              ##                      ##         *
///*    #########             ############           #########               ###########              #############             ##                      ##         *
///*    ##                           ##                    ##          ##             ##             ##                ##             ##                     ##            ##                     ##          *
///*    ##                          ##                      ##         ##               ##           ##                ##           ##                        ##           ##                    ##           *
///*    ##                         ##                        ##        ##                 ##         ##                ##          ##                          ##          ##                  ##             *
///*  #####                  ####                    ####     ###               ###      ###              ###        ###                         ###        ##########                  *

///*   *******************************************************************************************************************************


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



int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans,cnt=1,cn=0;
    scl(n);

    string s,s1,h;
    cin>>s1;
    for(i=1; i<n; i++)
    {
        cin>>s;
        if( s==s1 ) cnt++;
        else {cn++; h=s;}
    }
    if(cnt>cn)cout<<s1;
    else cout<<h;




    return 0;
}




