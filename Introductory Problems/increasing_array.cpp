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
    
    int n; cin >> n;
    ll ans = 0;
    
    int prev; cin >> prev;
    
    for(int i=1;i<n;i++) {
        int num;
        cin >> num;
        if(num < prev) {
            ans += prev-num;
        }
        else {
            prev = num;
        }
    }
    
    cout << ans;
    return 0;
}

