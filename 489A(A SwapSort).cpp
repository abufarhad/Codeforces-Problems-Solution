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

        if(index != i)
        {
            content temp;

            temp.from= i;
            temp.to= index;

            saves.push_back(temp);

            swap(value[i], value[index]);
        }
    }

    cout << saves.size() << endl;

    for(int i=0; i<saves.size(); i++) cout << saves[i].from << " " << saves[i].to << endl;

    return 0;
}
