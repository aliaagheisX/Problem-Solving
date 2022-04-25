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

    int n,k;
    cin >> n >> k;
    ll minHeight = INT_MAX;
    int arr[n + 1];
    arr[0] = 0;
    int index = 0;
    for(int i = 0;i < n;i++) {
        cin >> arr[i + 1];
        arr[i + 1] += arr[i];
    }
    for(int i = k;i <= n;i++) {
        if(arr[i] - arr[i - k] < minHeight) minHeight = arr[i] - arr[i - k], index = i - k + 1;
    }
    cout<< index;
    return 0;
}