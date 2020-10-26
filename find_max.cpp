#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;


int altbs(vi& r, int x)
{
    int k = 0;
    int n = r.size();
    for(int b = n/2; b >= 1; b /= 2)
    {
        while(k+b < n && r[k+b] <= x) k += b;
    }
    if(r[k] == x) return k;
    else return n + 1;

}

int main()
{
    vi a = {1, 2, 4, 4, 7, 9};
    auto r = equal_range(a.begin(), a.end(), 4);
    cout <<  r.second - r.first << '\n';
}