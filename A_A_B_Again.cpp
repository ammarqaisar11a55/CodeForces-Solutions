#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin>>s;
    cout<<s[0] - '0' + s[1] - '0'<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    cin >> TC;
    cin.ignore();
    while (TC--) solve();
}