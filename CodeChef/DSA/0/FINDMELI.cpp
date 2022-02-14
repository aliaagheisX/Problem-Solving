#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int k, n;
    cin >> n >> k;
    int arr[n];
    bool found= 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == k) found = true;
    }

    if(found) cout << 1;
    else cout << -1;
    

    

    return 0;
}