#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin>>s;

    int first_digit = s[0] - '0';
    int last_digit = s[2] - '0';

    if(first_digit == last_digit)
    {
        s[1] = '=';
    }
    else if(first_digit < last_digit)
    {
        s[1] = '<';
    }
    else s[1] = '>';
    

    cout<<s<<endl;
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