#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    ll sum = n * (n + 1) / 2;
    ll sumO = n * n;
    ll sumE = n * (n + 1);
    cout << sumO << ' ' << sumE;
    return 0;
}