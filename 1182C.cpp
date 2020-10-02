#include<bits/stdc++.h>
using namespace std;
string s[1000000];
vector<pair<int,int> >vc,vp;
void print(int x,int y,int z,int a)
{
    cout<<s[x]<<" "<<s[y]<<endl<<s[z]<<" "<<s[a]<<endl;
}
int d[127]= {0};
int arr[1000000][6];
int main()
{
    int n;
    cin>>n;
    d['a']=1;
    d['e']=2;
    d['i']=3;
    d['o']=4;
    d['u']=5;

    for(int i=1; i<=n; i++)
    {
        cin>>s[i];
        int total=0;
        int last=0;
        for(int j=0; j<s[i].length(); j++)
        {
            if(d[s[i][j]])
            {
                total++;
                last=d[s[i][j]];
            }
        }
        if(arr[total][last])
        {
            vc.push_back(make_pair(arr[total][last],i));
            arr[total][last]=0;
        }
        else
        {
            arr[total][last]=i;
        }
    }
    for(int i=1; i<1000000; i++)
    {
        int lo=0;
        int x=0;
        for(int j=1; j<6; j++)
        {
            if(arr[i][j])
            {
                if(x)
                {
                    vp.push_back(make_pair(x,arr[i][j]));
                    x=0;
                }
                else
                {
                    x=arr[i][j];
                }
            }
        }
    }
    while(vp.size()<vc.size())
    {
        vp.push_back(vc.back());
        vc.pop_back();
    }
    cout<<vc.size()<<endl;
    for(int i=0; i<vc.size(); i++)
        print(vp[i].first,vc[i].first,vp[i].second,vc[i].second);
}
