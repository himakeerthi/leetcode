#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

int main()
{
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int best = 0, sum = 0;
    for(int k = 0; k < n; k++)
    {
        sum = max(a[k], sum + a[k]);
        best = max(best, sum);
    }

    cout << best << '\n';
}

