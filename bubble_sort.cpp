#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void bubble_sort(vi& a)
{
    int n = a.size();
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j + 1 < n; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble_sort(a);
    for(int& it: a)
    {
        cout << it << " ";
    }
    
}