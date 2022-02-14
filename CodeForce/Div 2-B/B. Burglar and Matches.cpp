#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, m;
    cin >> n >> m;
    vector<pair<ll, int>> arr(m);

    for(int i = 0;i < m;i++) cin >> arr[i].second >> arr[i].first;

    sort(arr.rbegin(), arr.rend());

    ll ans = 0;int i = 0;
    while(n && i < m) {
        ll boxes = arr[i].second < n ? arr[i].second : n;
        ans += boxes * arr[i].first;
        n -= boxes;
        i++;
    }
    cout << ans;
    return 0;
}