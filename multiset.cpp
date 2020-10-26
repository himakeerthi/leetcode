#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair


using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
/*typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
*/

int main()
{   
    int n = 5;
    vector<int> permutation;
    for(int i = 0; i < n; i++)
    {
        permutation.push_back(i);
    }
    int cnt = 0;
    do
    {
        ++cnt;
    } while (next_permutation(permutation.begin(), permutation.end()));
    cout << cnt <<"\n";

}