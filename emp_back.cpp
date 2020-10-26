#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vt;
    vt.emplace_back();
    for(auto& it : vt)
    {
        cout << it << " ";
    }
    cout << "size = " << vt.size();
    return 0;
}