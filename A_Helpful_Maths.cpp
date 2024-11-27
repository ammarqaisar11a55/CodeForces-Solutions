#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin>>s;

    vector<int>Digits;

    for(char c : s)
    {
        if(c>='0' && c<='9')
        {
            Digits.push_back(c-'0');
        }
    }

    sort(Digits.rbegin(),Digits.rend());

        for(char &c : s)
    {
        if(c>='0' && c<='9')
        {
            c = Digits.back() + '0';
            Digits.pop_back();
        }
    }

    cout<<s<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    // cin >> TC;
    // cin.ignore();
    while (TC--) solve();
}