//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 ll low[105],high[105],sum,total;
int main()
{
    int i,j,m,n,a,b,len;
   cin>>len>>total;

    sum=0;
    if(len>1 && total==0)    {cout<<"-1 -1"<<endl; return 0;}
    if(len==1 && total==0)    {cout<<"0 0"<<endl; return 0;}

    for(i=0; i<len; i++)
    {
        for(j=9; j>=0; j--)
        {
            if(sum+j<=total)
            {
                sum+=j;
                high[i]=j;
                break;
            }
        }
    }
    //cout<<sum<<endl;
    if(sum<total)  { cout<<"-1 -1"; return 0;}


    sum=1,low[0]=1;
    for(i=len-1; i>0; i--)
    {
        for(j=9; j>=0; j--)
        {
            if(sum+j<=total)
            {
                sum+=j;
                low[i]=j;
                break;
            }
        }
    }

    if(sum<total)low[0]+=total-sum;

    for(i=0; i<len; i++)cout<<low[i];
    cout<<" ";
    for(i=0; i<len; i++)cout<<high[i];

    return 0;
}

