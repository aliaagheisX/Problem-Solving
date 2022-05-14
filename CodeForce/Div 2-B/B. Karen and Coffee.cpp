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

    int n , k ,q, l , r , a , b;
    cin >> n >> k >> q;

    vector<int> mp(200005, 0);
    for(int i= 0;i < n;i++) {
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    for(int i = 1;i < 200005;i++) mp[i] += mp[i - 1];
    for(int i = 0;i < 200005;i++) mp[i] = (mp[i] >= k);
    for(int i = 1;i < 200005;i++) mp[i] += mp[i - 1];

    for(int i = 0;i < q;i++) {
        cin >> a >> b;
        cout << mp[b] - mp[a - 1] << '\n';
    }
    return 0;
}