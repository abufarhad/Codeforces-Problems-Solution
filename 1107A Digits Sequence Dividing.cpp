#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1,s2;
    ll cnt=0,ans=0;
    cin>>q;
    while(q--)
    {
        cin>>n>>s;
        if(n==2 )
        {
            if( s[0]==s[1]  ) cout<<"NO"<<endl;
            else
            {
                if( s[0]-'0' >s[1]-'0' ) cout<<"NO"<<endl;
                else
                    {cout<<"YES"<<endl<<"2"<<endl;cout<<s[0]<<" "<<s[1]<<endl;}
            }
        }
            else
            {
                cout<<"YES"<<endl<<"2"<<endl;
                cout<<s[0]<<" ";
                for(j=1; j<n; j++)
                    cout<<s[j];
                cout<<endl;
            }
        }

        return 0;
    }
