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
    ll sum = n*(n+1)/2;
    
    ll arraySum = 0;
    for(int i=1;i<n;i++) {
        int num; cin >> num;
        arraySum += num;
    }
    
    cout << sum-arraySum << "\n";
    return 0;
}

