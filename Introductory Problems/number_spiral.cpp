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
    
    int tt; cin >> tt;
    
    while(tt--) {
        ll row, col;
        cin >> row >> col;
        
        if(row==col) cout << 1LL * row*row - row + 1 << "\n";
        else if(col > row) {
            if(col%2) cout << 1LL * (col) * (col) + 1 - row << "\n";
            else cout << 1LL * (col-1)*(col-1) + row << "\n";
        }
        else {
            if(row%2) cout << 1LL * (row-1)*(row-1) + col << "\n";
            else cout << 1LL * row * row + 1 - col << "\n";
        }
    }
    
    return 0;
}

