#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int result = __gcd(a, b);
    cout << "gcd = " << result <<"\n";
    int lcm = a * b / result;
    cout << "lcm = " << lcm << "\n";
}