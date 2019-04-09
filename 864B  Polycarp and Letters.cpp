#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll m,n,i,k=0;
    string s,s1;
    cin>>n>>s;
    set<char>st;
    for(i=0;i<s.size();i++)
    {
        if(isupper(s[i]) )st.clear();
        else
        {
            st.insert(s[i]);
            k=max(k, (ll)st.size() );
        }
    }
    cout<<k<<endl;
}
