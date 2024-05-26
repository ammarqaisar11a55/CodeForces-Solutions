#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, s;
    cin >> n >> s;
    while (s != 0)
    {

        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
            n--;

        s--;
    }

    cout<<n<<endl;
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