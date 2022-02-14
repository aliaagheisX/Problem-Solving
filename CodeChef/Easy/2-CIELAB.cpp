#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a,b;
    cin >> a >> b;
    int c = a - b;

    int r = c % 10;

    r = (r == 5) ? 4 : 5;

    c /= 10;
    c = c * 10 + r;
    cout << c;

    return 0;
}