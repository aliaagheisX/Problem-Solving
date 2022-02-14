#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
vector<ll> lucky;
ll num;

void sl(ll n,int f,int s) {
    if(n <= 10e9) {
        if(f == s) lucky.push_back(n);

        sl(n * 10 + 7, f, s+1);
        sl(n * 10 + 4, f + 1, s);
    }
    return;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    cin >> num;

    sl(4, 1 , 0);
    sl(7, 0 , 1);
    sort(lucky.begin(),lucky.end());
    cout << lucky[lower_bound(lucky.begin(), lucky.end(), num) - lucky.begin()];
    return 0;
}