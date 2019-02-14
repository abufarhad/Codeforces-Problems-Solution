#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll i,j,cnt=0,sunno=0,sunno1=0,p=0,k=0;
    string s,s1,s2, a,b;
    cin>>s>>s1;

    i=0;
    while( s[i] == '0' )
    {
        sunno++;
        i++;
    }

    while( s1[p] == '0' )
    {
        sunno1++;
        p++;
    }

    //s.erase(sunno);
    //s1.erase(sunno1);
    for(i=sunno ; i<s.size(); i++)
    {
        a[k]=s[i];
        k++ ;
    }
    for(i=sunno1; i<s1.size(); i++)
    {
        b[k]=s1[i];
        k++;
    }

    cout<<sunno<<" "<<sunno1<<endl;
    cout<<a<<" "<<b;

}
