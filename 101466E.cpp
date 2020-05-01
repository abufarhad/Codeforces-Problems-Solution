#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 100005
ll n;
ll f[N];

void kmp_process(string s)
{
    ll i=1, j=0 , sz=s.size();

    while(i<sz)
    {
        if(s[i]==s[j]) f[i++]=++j;
        else
        {
            if(j)j=f[j-1];
            else f[i++]=0;
        }
    }
}


ll kmp_search(string s , string pattern)
{
    ll i=0, j=0, cnt=0, sz=s.size();

    while(i<sz)
    {
        if(s[i]==pattern[j] )
        {
            i++, j++;
            if(j==pattern.size())
            {
                cnt++;
                j=f[j-1];
            }
        }
        else
        {
            if(j) j=f[j-1];
            else i++;
        }
    }
    return cnt;
}


string  kmp(string s, string pattern)
{
    ll anslength =0 , left=1, right=pattern.size();

    while(left<=right)
    {
        ll mid=(left+ right) /2;
        string tmp=pattern.substr(0, mid);

        kmp_process(tmp);
        //cout<<mid <<" "<< kmp_search(s, tmp)<<endl;

        if( kmp_search(s, tmp) >=n )
        {
            anslength=mid;
            left=mid+1;
        }
        else   right=mid-1;
    }

    if(anslength) return pattern.substr(0, anslength);
    else return "IMPOSSIBLE";
}

int main()
{
    string s, s1;
    getline(cin, s);
    getline(cin, s1);
    cin>>n;
    cout<<kmp(s, s1)<<endl;
}
