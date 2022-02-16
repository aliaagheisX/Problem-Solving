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

    int n,a,b;
    ll x;
    cin >> n >> a >> b;
    for(int i = 0;i < n;i++) {
        cin >> x;
        ll maxD = x * a / b;
        ll minToken = ceil(maxD * b / (double)a);
        cout << x - minToken << ' ';
    }
    return 0;
}