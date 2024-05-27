#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;

    if(n>=1900){
        cout<<"Division 1"<<endl;
    }else if(n>=1600 && n<=1899){
        cout<<"Division 2"<<endl;
    }else if(n>=1400 && n<=1599){
        cout<<"Division 3"<<endl;
    }else cout<<"Division 4"<<endl;
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