#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if (b > a && b < c)
    {
        cout << "STAIR" << endl;
    }
    else if (b > a && b > c)
    {
        cout << "PEAK" << endl;
    }
    else
        cout << "NONE" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    cin.ignore();
    while (TC--)
        solve();
}