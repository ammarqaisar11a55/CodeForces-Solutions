#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int x , y;
    cin>>x>>y;

    cout<<min(x,y)<<" "<<max(x,y)<<endl;
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