#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin>>s;
    
    if(s.length()<=10){
        cout<<s<<endl;
        return;
    }

    string ans = s[0] + to_string(s.length()-2) + s[s.length()-1];
    cout<<ans<<endl;

    

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