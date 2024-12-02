#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    vector<int>V(n);

    for(auto &a : V)
        cin>>a;

    bool do_addition = true;

    int sum  = 0;

    for(int i = 0; i < V.size(); i++)
    {
        if(do_addition)
        {
            sum += V[i];
            do_addition = false;
        }
        else
        {
            sum -= V[i];
            do_addition = true;
        }
    }
    cout<<sum<<endl;
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