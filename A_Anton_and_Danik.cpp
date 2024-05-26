#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int a = 0;
    int d = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='A'){
            a++;
        }else d++;
    }

    if(a>d){
        cout<<"Anton"<<endl;
    }else if(d>a){
        cout<<"Danik"<<endl;
    }else cout<<"Friendship"<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
   /// cin >> TC;
   // cin.ignore();
    while (TC--) solve();
}