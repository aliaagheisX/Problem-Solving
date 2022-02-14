#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,k,a;
    cin >> n >> k;
    ll sum = 0;
    vector <int> arr;

    int minAbs = INT_MAX;

    for(int i = 0;i < n;i++) {
        cin >> a;
        if(k > 0 && a < 0) a*= -1, k--;
        if(abs(a) < minAbs) minAbs = a;
        sum += a;
    }
    if(k) {
        sum -= minAbs;
        sum+= pow(-1, k) * minAbs;
    }
    cout << sum;

    return 0;
}