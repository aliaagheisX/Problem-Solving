#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    int maxMin = 0;
    for(int i = 1;i < n;i++) {
        int m = a/i; //first
        int m1 = b / (n - i); //second
        m = m < m1 ? m : m1; //min
        if(m > maxMin) maxMin = m;
    }
    cout << maxMin;
    return 0;
}