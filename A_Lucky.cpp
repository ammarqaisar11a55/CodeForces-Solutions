#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int sum(int a)
{

    int s = 0;

    while (a != 0)
    {
        s = s + a % 10;
        a = a / 10;
    }

    return s;
}

void solve()
{
    string s;
    cin >> s;

    string last;

    last.push_back(s[s.length() - 1]);
    last.push_back(s[s.length() - 2]);
    last.push_back(s[s.length() - 3]);

    s.erase(5);
    s.erase(4);
    s.erase(3);


    if (sum(stoi(s)) == sum(stoi(last)))
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
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