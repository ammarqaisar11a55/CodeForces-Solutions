#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int l;
    cin >> l;
    vector<int> nums;

    for (int i = 0; i < l; i++)
    {
        int n;
        cin >> n;
        nums.push_back(n);
    }

    vector<int>freqs;

    for (int i = 0; i < nums.size(); i++)
    {
        int freq = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if(i!=j && nums[i]==nums[j]){
                freq++;
            }
        }
        freqs.push_back(freq); 
    }
    
    for (int i = 0; i < freqs.size(); i++)
    {
        if(freqs[i]==1){
            cout<<i+1<<endl;
            return;
        }
    }
    
    
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