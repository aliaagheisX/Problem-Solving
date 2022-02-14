#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll a,b,c,d, f1, f2;
    cin >> a >> b >> c >>d;
    double k1 = a / (double)c;
    double k2 = b / (double)d;
    if(k1 < k2) f1 = a,f2 = c;
    else f1 = b, f2 = d;

    f1 = (a * b) * f2 * f2 - (c * d) * f1 *f1;
    f2 *= f2 * a * b;
    ll g = __gcd(f1, f2);

    cout << f1/g << '/' << f2/g;


    return 0;
}