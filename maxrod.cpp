#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;


int maxrod(vector<int>& a)
{
    // r(n) = max(a(i) + r[n-i])
    //        1 <= i <= n, DAG is from right to left

    int n = a.size();
    vector<int> r(n+1);
    r[0] = 0; // base case when remainder of the cut is zero or when there is no rod left.
    for(int j = 1; j <= n; j++) // subproblems from size 1 to n to solve original problem n
    {
        int best = INT_MIN;
        for(int i = 1; i <= j; i++) // for each subproblem of size j, check by bruteforce which is the maximum for that size 
        {
            best = max(best, a[i-1] + r[j-i]);
        }
        r[j] = best;
    }
    return r[n];
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << maxrod(a);

}