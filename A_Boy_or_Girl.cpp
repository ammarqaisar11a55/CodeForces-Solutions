#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool is_there(vector<char>c, char tobefound)
{

    for (int i = 0; i < c.size(); i++)
    {
        if (c[i] == tobefound)
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    string s;
    cin >> s;

    vector<char>characters;

    for (int i = 0; i < s.length(); i++)
    {
        if(is_there(characters,s[i])){
            characters.push_back(s[i]);
        }
    }

    if (characters.size() % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
        cout << "CHAT WITH HER!" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    // cin >> TC;
    // cin.ignore();
    while (TC--)
        solve();
}