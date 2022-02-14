#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,n;
    cin >> t;

    
    
    while(t--) {
        cin >> n;
        ll arr[n];
        for(int i = 0;i < n;i++) cin >> arr[i];

        sort(arr, arr + n); // sort
        
        ll min = arr[1] - arr[0];

        for(int i = 2;i < n;i++) {
            if(arr[i] - arr[i - 1] < min) min = arr[i] - arr[i - 1];
        }
        cout << min << '\n';
    }

    return 0;
}