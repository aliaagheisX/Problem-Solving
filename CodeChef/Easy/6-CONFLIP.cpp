#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,g,i,n,q;
    cin >> t;
    
    while(t--) {
        cin >> g;
        while(g--) {
            cin >> i >> n >> q;
            int cI = n / 2;
            int cNotI = n - cI;
            if(q == i) cout << cI << '\n';
            else cout << cNotI << '\n';
        }
    }

    return 0;
}