#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a,b,c;
    cin >> a >> b >>c;
    if(a + b > c &&  a + c > b && b + c > a && a && b && c) {
        if(a != b && a != c && b != c) cout << 3;
        else if(a == b && a == c) cout << 1;
        else cout << 2;
    }
    else cout << -1;

    return 0;
}