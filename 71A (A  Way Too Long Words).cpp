#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cnt=0,cn=0,j,t;
    cin>>t;
    for(j=0; j<t; j++)
    {
        string s;
        cin>>s;

      if(s.length()>10)
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        else
            cout<<s<<endl;
    }
    return 0;
}

