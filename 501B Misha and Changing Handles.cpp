#include <iostream>
#include <map>
using namespace std;

int main()
{
    int q;
    map<string,string> old;
    cin >> q;
    for (int i=0; i<q; i++)
    {
        string a,b;
        cin >> a >> b;
        if (old.count(a)==0) old[a]=a;

        old[b] = old[a];
        old.erase(a);
    }
    cout << old.size() << endl;

    for (auto kv : old)
    {
        cout << kv.second << "  " << kv.first << endl;
    }
    return 0;
}
