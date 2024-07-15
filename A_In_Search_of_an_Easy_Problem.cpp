#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int N;
    cin >> N;

    int input;

    for (int i = 0; i < N; i++)
    {
        cin>>input;
        if(input==1)
        {
            cout<<"HARD"<<endl;
            return;
        }
    }
    

    cout << "EASY" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    //  cin >> TC;
    // cin.ignore();
    while (TC--)
        solve();
}