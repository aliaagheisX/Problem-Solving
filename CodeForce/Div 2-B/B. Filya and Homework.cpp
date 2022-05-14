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

    int n;ll a;

    cin >> n;
    set <ll> arr;
    for(int i = 0;i < n;i++) cin >> a, arr.insert(a);

    if(arr.size() <= 2) cout << "YES";
    else if(arr.size() > 3) cout << "NO";
    else {
        ll a = *arr.begin();
        ll b = *(++arr.begin());
        ll c = *(--arr.end());
        if(b - a == c - b) cout << "YES";
        else cout << "NO";
    }

    return 0;
}