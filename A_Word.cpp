#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin >> s;
    int low = 0;
    int high = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            high++;
            continue;
        }
        else if (islower(s[i]))
        {
            low++;
        }
    }

    if (high > low)
    {

        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;
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