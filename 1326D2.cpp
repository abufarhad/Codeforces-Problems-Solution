#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define l(s)                s.size()
#define all(x) 	            (x).begin(), (x).end()
#define N 100006


//compute longest prefix which is a suffix
ll longest_prefix_suffix_match(string   pattern)
{
    ll len_p=pattern.size();
    ll f[len_p];

    memset(f, 0, sizeof(f));


    int k=1,len=0,m;
    f[0]=0;
    while(k<len_p)
    {
        if(pattern[k]==pattern[len])
        {
            f[k++]=++len;
        }
        else
        {
            if(len) len=f[len-1];
            else f[k++]=0;
        }
    }
    //cout<<"len "<<f[len_p-1]<<endl;
    return f[len_p-1];
}

ll largest_p_s(string s)
{

    string t=s+'#';
    reverse(all(s));
    t+=s;

    return longest_prefix_suffix_match(t);
}



int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4, ans;

    ll cnt=0;
    cin>>s;
    n=l(s);
    for(i=0, j=n-1 ; i<j; i++, j--)
    {
        if(s[i]==s[j])cnt++;
        else break;
    }

    string rem=s.substr(cnt, n- 2*cnt );

    ans=s.substr(0, cnt);

    //Now i just need to check remaining string what is the longest prefix thats reverse matches  its suffix
    if(rem.size())
    {

        ll l_pre=largest_p_s(rem);
        reverse(all(rem));               //for suffix
        ll l_suf=largest_p_s(rem);


        if(l_pre>=l_suf)
        {
            reverse(all(rem));          // it is prefix
            ans+=rem.substr(0, l_pre );
        }
        else  ans+=rem.substr(0, l_suf );

    }

    ans+=s.substr(n-cnt , n );

    cout<<ans<<endl;
    }
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



