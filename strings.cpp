#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;


bool comp(string& a, string& b)
{
    if(a.size() != b.size())
    {
        return a.size() < b.size();
    }
    return a < b;
}

int main()
{
    vector<string> strs;
    strs.push_back("asfsdfref");
    strs.push_back("sfsdf");
    strs.push_back("dsa");
    strs.push_back("aad");
    sort(strs.begin(), strs.end(), comp);
    for(string& s : strs)
    {
        cout << s << " ";
    }
}