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
    
    string s;
    getline(cin,s);
    
    int n = s.length(), count = 1, ans = 1;
    char candidate = s[0];
    
    for(int i=1;i<n;i++) {
        if(s[i]==candidate) {
            count += 1;
            ans = max(ans,count);
        }
        else {
            candidate = s[i];
            count = 1;
        }
    }
    
    cout << ans;
    return 0;
}

