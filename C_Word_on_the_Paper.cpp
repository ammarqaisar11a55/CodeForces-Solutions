#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    vector<vector<char>> Grid(8, vector<char>(8));

    for (int i = 0; i < Grid.size(); i++)
    {
        for (int j = 0; j < Grid[i].size(); j++)
        {
            cin >> Grid[i][j];
        }
    }

    string ans;

    for (int i = 0; i < Grid.size(); i++)
    {
        for (int j = 0; j < Grid[i].size(); j++)
        {
            if (isalpha(Grid[i][j]))
                ans += Grid[i][j];
        }
    }

    cout << ans << endl;
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