#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int,int>;
using vvi = vector<vector<int>>;

const int MOD = 1e9 + 7;
const long long INF = 1e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; cin >> n;
    
    while(n != 1) {
        cout << n << " ";
        if(n%2) n = n*3 + 1;
        else n /= 2;
    }
    
    cout << 1;
    return 0;
}

