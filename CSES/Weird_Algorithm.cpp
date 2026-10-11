#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

void solve() {
    ll n = 0;
    cin>> n;

    ll Num = n;

    while(true){

        cout<<Num<<" ";
        
        if(Num == 1){
            break;
        }

        if(Num % 2 == 0){
            Num = Num/2;
        }else{
            Num = (Num * 3) + 1;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}