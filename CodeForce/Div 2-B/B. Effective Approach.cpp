#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair
#define MAX (int)10e5+20

void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m ,x;
    cin >> n;

    v<int> indexes(n + 1);

    for(int i = 0;i < n;i++) cin >> x, indexes[x] = i;
    
    cin >> m;
    ll r1 = 0;
    ll r2 = 0;

    for(int i = 0;i < m;i++) {
        cin >> x;
        r1 += indexes[x] + 1;
        r2 += n - indexes[x] ;
    }
    cout << r1 << ' ' << r2 ;

    return 0;
}