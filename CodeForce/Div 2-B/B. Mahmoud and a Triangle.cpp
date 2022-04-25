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

    int n;
    cin >> n;
    ll arr[n];
    for(int i = 0;i < n;i++) cin >> arr[i];
    sort(arr, arr + n);
    for(int i = n- 1;i >= 2;i--)
        if(arr[i - 1] + arr[i - 2] > arr[i]) {cout << "YES";return 0;}
    cout <<"NO";
    return 0;
}
