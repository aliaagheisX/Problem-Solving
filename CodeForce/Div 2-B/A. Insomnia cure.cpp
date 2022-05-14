#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int a[4], d;
int lcm(int a, int b) {
    return (a*b) / __gcd(a, b);
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> a[0] >> a[1] >> a[2] >> a[3] >> d;

    int c = d / a[0] + d / a[1] + d / a[2] + d / a[3];

    c-= d/lcm(a[0], a[1]) + d/lcm(a[0], a[2]) + d/lcm(a[0], a[3]) + d/lcm(a[1], a[2]) + d/lcm(a[1], a[3]) + d/lcm(a[3], a[2]);
    c += d/lcm(lcm(a[0], a[1]), a[2]) + d/lcm(lcm(a[0], a[1]), a[3]) + d/lcm(lcm(a[0], a[3]), a[2]) + d/lcm(lcm(a[3], a[1]), a[2]);
    c -= d/lcm(lcm(lcm(a[0], a[1]), a[2]) , a[3]);

    cout << c;
    
    return 0;
}
/* 

2 + 1 + 1 + 0 = +4
-(6+4+3+2+1+1) = -17
12 + 6 + 4 + 3 = 25


 */