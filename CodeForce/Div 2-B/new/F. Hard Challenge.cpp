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

    int t,n;
    cin >> t;
    ll a,b;
    
    while(t--) {
        cin >> a >>b;
        ll q = ceil((double)a / b);
        cout << (q)*b - a << '\n';
    }

    return 0;
}

/* 
3 4 9

3 4 = 1
4 9 = 5
3 9 = 6
s = 7
another side : max - min + 1
 */