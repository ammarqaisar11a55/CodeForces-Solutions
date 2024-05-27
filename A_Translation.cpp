#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s,t;
    cin>>s>>t;
    
    int st = 0;
    int e = t.length() - 1;

    while(st<=e){
        swap(t[st++],t[e--]);
    }
    if(s==t){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    //cin >> TC;
    //cin.ignore();
    while (TC--) solve();
}