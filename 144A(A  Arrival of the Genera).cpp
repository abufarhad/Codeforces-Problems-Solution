#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {

        int i,j,m,cnt=0,tem,num_max=-1,num_min=1000,max_position,min_position,f,ans;
        int a[200];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            num_max=max(num_max,a[i]);
            num_min=min(num_min,a[i]);
        }
        for(i=0; i<n; i++)
        {
            if(num_max==a[i])
            {
                max_position=i;
                break;
            }
        }
        for(i=n-1; i>=0; i--)
        {
            if(num_min==a[i])
            {
                min_position=i;
                break;
            }
        }

        //cout<<max_position+1<<" "<<min_position+1<<endl;
        if(max_position>min_position)
        {
            ans=   ( (max_position)  + (n - (min_position+1)) ) -1 ;
        }
        else ans=   ( (max_position)  + (n - (min_position+1)) ) ;

        cout<<ans<<endl;
    }
    return  0;
}
