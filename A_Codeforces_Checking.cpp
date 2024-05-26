#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    char c;
    cin >> c;
    string s = "codeforces";
    bool found = false;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]==c){
            found = true;
            break;
        }
    }
    if(found){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
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