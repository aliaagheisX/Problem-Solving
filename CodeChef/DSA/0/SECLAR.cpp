#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a,b,c;
    cin >> a>>b>>c;
    int max = a > b ? a : b;
    int secmax = a > b ? b : a;
    
    if(c > max) cout << max;
    else if (c > secmax) cout << c;
    else cout << secmax;

    return 0;
}