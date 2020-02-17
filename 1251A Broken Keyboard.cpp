#include<bits/stdc++.h>
using namespace std;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define ll long long
int main()
{
    ll m,n,i,t,j;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        s+="#";
        vector<char>v;
       for(i=0; i<s.size() ; )
        {
            if(s[i]==s[i+1] )i+=2;
            else v.push_back(s[i]), i++;
        }
        sort(v.begin(), v.end());

        set<char>st;
        fr1(i, v.size()-1)st.insert(v[i]);  for(auto it: st)cout<<it;  cout<<endl;
    }
}
