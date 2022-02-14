#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


ll solve(ll n) {
    ll sum  = 0;
    int s = 5;
    while(floor(n / s)) {
        sum += n / s;
        s*= 5;
    }
    return sum;
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; ll n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << solve(n) << '\n';
    }

    return 0;
}