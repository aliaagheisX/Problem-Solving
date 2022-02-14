#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, m, xc,yc , dx, dy, k;
    cin >> n >>m >> xc>>yc >>k ;
    ll steps = 0;
    while(k--) {
        cin >> dx >> dy;

        ll sub = dx < 0 ? 1 : n;
        ll stepX, stepY;
        if(dx == 0) stepX = LONG_MAX;
        else stepX = (sub - xc) / dx;

        sub = dy < 0 ? 1 : m;
        
        if(dy == 0) stepY = LONG_MAX;
        else stepY = (sub - yc) / dy;

        ll minS = min(stepX, stepY);
        steps+= minS;
        xc += minS*dx;
        yc += minS*dy;
        
    }
    cout << steps;
    return 0;
}