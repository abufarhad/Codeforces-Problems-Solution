#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,b,c,cnt,cn,n;
    while(cin>>n>>a>>b>>c){
    vector<int>v;
    v.push_back(a), v.push_back(b), v.push_back(c);
    sort(v.begin(),v.end());
    if(v[0]+v[1]+v[2]==n)cout<<"3"<<endl;
    else if(v[0]+v[1]==n)cout<<"2"<<endl;
    else cout<<n/v[0]<<endl;
    v.clear();
    }

    return 0;
}

