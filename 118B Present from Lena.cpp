#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int gap=n,inc=0,i,g;                 ///before middle line
    for(i=0; i<n; i++)
    {
        for(g=0; g<gap; g++)
            cout<<"  ";

        for(g=0; g<=inc; g++)
        {
            if(g<inc)
                cout<<g<<" ";
            else
                cout<<g;
        }
//        cout<<"g= "<<g<<" "<<inc<<endl;
        for(g=inc-1; g>=0; g--)
        {
            cout<<" "<<g;
        }
//        // cout<<g<<" - "<<inc<<endl;
        cout<<endl;
        gap--;
        inc++;
    }
}
