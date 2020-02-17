#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll i,j,k;
    ll t;
    cin>>t;
    while(t--)
    {
        string s , t;
        cin>>s>>t;
        vector<ll>v[30];
        fr(i, s.size()) v[s[i]-'a'  ].push_back(i);

        ll now=0, cnt=0, ans=1;

        fr(i, t.size())
        {
            ll ch=t[i]-'a';

            if( v[ ch] .size()==0 ){ans=-1;break;}

            cout<<"Now "<<now<<" sz= "<<v[ch].size()<<endl;
            auto  it=lower_bound(v[ch ].begin(),  v[ch ].end() , now);

            cout<<*it<<" pointer "<< *v[ch].end()<<endl;
            if(it == v[ch].end())
            {
                ans++;
                now=v[ch][0];
                cout<<"now ="<<now<<" "<<t[i]<<" "<<v[ch].size()<<endl;
                now++;
            }
            else
            {
                cout<<"*it ="<<*it<<endl;
                now=(*it)+1;
                cout<<"now ="<<now<<" "<<t[i]<<" "<<v[ch].size()<<endl;
            }
        }

    cout<<ans<<endl;
    }
}

/*
#include <bits/stdc++.h>
using namespace std;
#define debug               cout<<"I am here"<<endl;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s, t;
        cin >> s >> t;
        vector<int> occ[26];
        for(int i = 0; i < s.size(); i++)
        {
            occ[s[i]-'a'].push_back(i);
        }

        //cout<<"end "<<endl;
        for(int i=0;i<s.size();i++)
        {
            int tmp=occ[s[i]-'a' ].size();
            //cout<<tmp<<endl;
            for(int j=0;j<tmp; j++)
            {
                cout<<occ[s[i]-'a' ] [j]<<" ";
            }
            cout<<endl;
        }


        int cnt = 1;
        int pos = 0;
        bool bad = 0;
        for(int i = 0; i < t.size(); i++)
        {
            cout<<t[i]<<" --  "<<occ[t[i]-'a'].size()<<endl;

            if(occ[t[i]-'a'].size() == 0)
            {
                bad = 1;
                break;
            }
            int itr = lower_bound(occ[t[i]-'a'].begin(), occ[t[i]-'a'].end(), pos) - occ[t[i]-'a'].begin();
            cout<<itr<<" "<<pos<<endl;

            cout<<occ[t[i] -'a'].size()<<endl;

            if(itr == occ[t[i]-'a'].size())
            {
                ++cnt;
                cout<<"occ [0] "<<occ[t[i]-'a'][0]<<endl;
                pos = occ[t[i]-'a'][0] + 1;
            }
            else
            {
                cout<<"itr "<<itr<<" "<<occ[t[i]-'a'][itr]<<endl;
                pos = occ[t[i]-'a'][itr] + 1;
                cout<<"itr "<<itr<<" "<<occ[t[i]-'a'][itr]+1<<endl;
            }
        }
        if(bad)
            cnt = -1;
        cout << cnt << endl;
    }
}
*/
