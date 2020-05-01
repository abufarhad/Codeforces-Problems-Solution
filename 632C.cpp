#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(string s, string s1)
{
       return s+s1 < s1+s;
}

int main()
{
    ll m, n,j, i;
    string  s1, s2;
    cin>>n;
    vector<string >s;
    for(i=0; i<n; i++)
    {
        cin>>s1;
        s.push_back(s1);
    }
    sort(s.begin() , s.end() , cmp);

    for(auto it: s)cout<<it;
}
