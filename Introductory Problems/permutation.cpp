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
    if(n==1) cout << 1;
    else if(n <= 3) cout << "NO SOLUTION";
    else {
        for(int i=2;i<=n;i+=2) {
            cout << i << " ";
        }
        for(int i=1;i<=n;i+=2) {
            cout << i << " ";
        }
    }
    
    return 0;
}

