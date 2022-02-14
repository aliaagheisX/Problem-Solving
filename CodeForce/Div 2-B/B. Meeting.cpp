#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int xa,ya,xb,yb,n,x,y,r;
    cin >> xa>>ya>>xb>>yb >> n;
    int ans = 0;
    // let xa, ya be min
    if(xa > xb) swap(xa, xb);
    if(ya > yb) swap(ya, yb);

    v<v<int>> c(n, v<int>(3));
    for(int i = 0;i < n;i++) 
        cin >> c[i][0] >> c[i][1] >> c[i][2];
    for(int i = xa;i<=xb;i++) {
        for(int j = ya;j <= yb;j++) {
            if(i != xa && i!= xb && j != ya && j != yb) continue;
            for(int r = 0;r < n;r++) {
                int dist = (i - c[r][0])*(i - c[r][0]) + (j - c[r][1]) * (j - c[r][1]);
                if(dist <= c[r][2] * c[r][2]) {ans++;break;}
            }
        }
    }
    cout <<  (2 * (xb - xa) + 2 * (yb - ya)) - ans;
    return 0;
}