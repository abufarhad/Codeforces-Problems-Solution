#include<bits/stdc++.h>
using namespace std;
#define sortD(a)  sort(a,a+n,greater<int>())
int main()
{
    string s;
    int a,b,n,l,i,cnt[1000];
    cin>>n>>s;
    set<char>st;
    l=s.length();
    for(i=1; i<l; i++)
    {
        if(s[i-1]!=s[i])
        {
            cout<<"YES"<<endl<<s[i-1]<<s[i]<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
