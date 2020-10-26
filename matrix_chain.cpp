#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

vector<vector<vector<int>>> matrix_chain_method(vector<int>& a)
{
    int n = a.size();
    vector<vector<int>> m (n, vector<int> (n));
    vector<vector<int>> s (n, vector<int> (n)); //parent pointers
    for(int i=0; i<n;i++)
    {
        m[i][i] = 0;
    }

    for(int length=2; length<n; length++)
    {
        for(int i=0; i<n-length+1; i++)
        {
            int j = i+length-1;
            m[i][j] = INT_MAX;
            for(int k=i; k<j; k++)
            {

                int best = m[i][k] + m[k+1][j] + a[i-1]*a[k]*a[j];
                if(best<m[i][j])
                {
                    m[i][j] = best;
                    s[i][j] = k;
                }

            }
            
        }
    }
    return {m, s};

}

void printRight(vector<vector<int>>& a)
{
    int n = a.size();
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\n";
}

void printSol(vector<vector<int>>& s, int i, int j)
{
    if(i==j) printf("A[%d]", i);
    else
    {
        printf("(");
        printSol(s,i,s[i][j]);
        printSol(s,s[i][j]+1,j);
        printf(")");
    }
    
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    auto result = matrix_chain_method(a);
    auto& m = result[0];
    auto& s = result[1];
    printRight(m);
    printRight(s);
    printSol(s,1,6);
}