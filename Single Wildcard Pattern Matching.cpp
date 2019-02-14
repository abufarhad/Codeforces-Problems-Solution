#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define scl(x) scanf("%lld",&x)

int main()
{
    ll m,n,t,i,cnt=0, cn=0, sv1,sv;
    string s,st1,s3,st4;

    scl(m),scl(n);
    cin>>s>>st1;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='*') break;
        else
        {
            cnt++;
            sv1=i;
        }
    }

    for(i=s.size()-1 ; i>=0; i--)
    {
        if(s[i]=='*') break;
        else
        {
            cn++;
            sv=i;
        }
    }

    for( i=cnt; i<(st1.size()-cn); i++) s3+=st1[i];

    //cout<<save<<" "<<sv<<" "<<cnt<<" "<<cn<<" "<<s3<<endl;

    s.insert((cnt),s3 );


    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='*') continue;
        else st4+=s[i];
    }

    //cout<<s4<<endl;

    if(st1==st4) printf("YES\n");
    else printf("NO\n");

    return 0;
}




