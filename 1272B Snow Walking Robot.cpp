#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,i,j,k ,t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=s.size();
        ll cntl=0, cntr=0, cntd=0, cntu=0;
        fr(i, s.size())
        {
            if(s[i]=='L')cntl++;

            if(s[i]=='R')cntr++;

            if(s[i]=='U')cntu++;

            if(s[i]=='D')cntd++;
        }

        ll needl_r=min(cntl, cntr);
        ll needu_d=min(cntu, cntd);

        if(cntl==0 or cntr==0)needl_r=0;
        if(cntu==0 or cntd==0)needu_d=0;

        if(needl_r>1   and needu_d==0 )needl_r=1;
        if(needu_d>1 and needl_r==0 )needu_d=1;
        string s1;
        fr(i, needl_r)  s1+='L';
        fr(i, needu_d)  s1+='U';
        fr(i, needl_r)  s1+='R';
        fr(i, needu_d)  s1+='D';

        cout<<s1.size()<<endl<<s1<<endl;
    }

}
