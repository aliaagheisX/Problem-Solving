#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;bool b;
    cin >> n >> m >> b;
    while(n || m || b) {
        ll wr = n - 7;
        ll wc = m - 7;
        wr *= wc;
        cout << (long)(b ? ceil(wr / 2.0 ) : floor(wr /2.0)) << '\n';
        cin >> n >> m >> b;
    }

    return 0;
}