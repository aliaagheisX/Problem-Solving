#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,l,r,k;
    cin >> t;

    
    while(t--) {
        cin >> l >> r >> k;
        if(l == r) {
            if(l == 1) cout << "NO\n";
            else cout << "YES\n";
            continue;
        }
        int min = (r - l + 1) - (r / 2 - (l-1) / 2);
        if(min <= k) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}