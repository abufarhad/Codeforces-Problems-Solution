#include<bits/stdc++.h>
using namespace std;
struct content
{
    int from;
    int to;
};

int main()
{
    vector <content > saves;
    int n;
    cin >> n;
    int value[n];
    for(int i=0; i<n; i++) cin >> value[i];

    for(int i=0; i<n; i++)
    {
        int index = i;
        //cout<<"index --> "<<i<<" ->   value[index] "<<value[index]<<endl;

        for(int j=i+1; j<n; j++)
        if(value[index] > value[j]) index = j;

        //cout<<"index1 --> "<<index<<endl;

        if(index != i)
        {
            content temp;
            temp.from= i;
            //cout<<"Form "  <<temp.from<<" "<<endl;
            temp.to= index;
            //cout<<"To "<<temp.to<<" "<<endl;

            saves.push_back(temp);  //cout<<"temp "<<saves.push_back(temp)<<" "<<endl;

            int temp2 = value[i];
            //cout<<"value temp2 "<<value[i]<<" "<<endl;

            value[i] = value[index];
           // cout<<"value  [i] "<<value[index]<<" "<<endl;

            value[index] = temp2;
           // cout<<"value[index] "<<value[index]<<" "<<endl;
        }
    }

    cout << saves.size() << endl;

    for(int i=0; i<saves.size(); i++) cout << saves[i].from << " " << saves[i].to << endl;

    return 0;
}
