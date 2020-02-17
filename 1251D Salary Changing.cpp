/*  Problem er idea ta holo -
     amak mid ber korte hbe tai ami jdi mid ekta dhore Bi-search mari tobe 3 ta jinis check korbo ,
     mid theke  (n+1)/2 ta man thakbe ami dekhbo dhora mid diye ei condition fill up kora jay kina
     tai check korbo 3 ta case (check editorial)
     1. jei value ta ke mid hisabe cinta kortesi seta amr dewya range er second value tar boro kina  , jdi hy tahole
     eta bola jay j ei value ta mid hbe na er left er kono value hbe
     2. jdi mid er ceye soman or boro man thake tbe eta mid howya possible tai [ cnt ++ ] korbo
     3. uporer 2 ta condition satisgy na korle bolte pari ei valu ta [ l<mid<=r ] ei condition e thake , tai etake apadoto
     store kore rakhi pore kaje lagabo jdi short pore mid er left diker (choto valu) cover up korar jonno

     ekhn jdi [ cnt ] er valu mid er theke jtgula lagbe sb na hy tahole porer jtgula lagbe ttgula [ mid ] add kore cover up
     kore dibo karon amt max value dorkar seta soman o hote pare

     r sb gula add kore rakhbo total sum ta dewya sum er soman or choto ache kina check korar jonno
     eisb criteria jdi   satisfy kore tahole dhora mid ta [ mid ] hote parbe .

     evabe continue korbo jotokkh na l<=r hy
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define sz(s)   s.size()
#define debug               printf("I am here\n")
#define  N  200005
ll n, sum;
pair<ll, ll> a[N];

bool is_mid(ll mid)
{
    ll s=0, cnt=0;
    vector<ll>v;

    fr(i,n)
    {
        if(a[i].second< mid )s+=a[i].first;
        else if(a[i].first >=mid)
        {
            s+=a[i].first, cnt++;
        }
        else v.push_back(a[i].first);
    }

    ll lagbe=max(0ll, (n+1)/2 -cnt );

    if(v.size()>0)
    for(ll i=v.size()-1;i>=0;i--)
    {
        if(lagbe)
        {
            lagbe--;
            s+=mid;
        }
        else  s+=v[i];
    }

    if(lagbe)return 0;
    if(s<=sum)return 1;
    else return 0;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n>>sum;
        fr(i,n)cin>>a[i].first>> a[i].second;

        sort(a, a+n);

        ll l=1, r=1e15, mid,ans;
        while(l<=r)
        {
            mid=(l+r)/2;
            if( is_mid(mid) )
            {
                ans=mid;
                l=mid+1;
            }
            else  r=mid-1;
        }
        cout<<ans<<endl;
    }
}
