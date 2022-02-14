#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, x, a, b;cin >> n;
    int r1 = 0,p1 = 0, p2 = INT_MAX;
    for(int i = 0;i < n;i++) {
        cin >> x;
        if(x > r1) r1 = x;
    }
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> x;
        if(x > p1) p1 = x;
    }
    cin >> n;
    for(int i = 0;i < n;i++) {
        cin >> x;
        if(x < p2) p2 = x;
    }
    cin >> a >> b;

    ld r2 =  sqrt((ld)(b * p1) / (a * p2 + b * p1)) * r1;
    cout << fixed << setprecision(12) <<r2;

    return 0;
}