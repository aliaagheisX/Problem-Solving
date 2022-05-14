#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int vp, vd, t, f,c;
    int ans =0;
    double dp = 0;
    double tc = 0;
    cin >> vp >> vd >> t >> f >> c;
    if(vp >= vd ){cout << 0 ; return 0;}
    dp += vp * t;//before knoq to escape
    while(dp < c){
        tc = (double)dp /(vd - vp); dp += tc * vp;//after  catch her After T
        if(dp >= c) break;
        ans++;
        dp += vp * (tc + f);//after  return Home her After T
    }
    cout << ans;
    /* first meet at  t = floor(dp /abs(vd - vp) ) */
    /* then dragon return to it's home dp = vp * (t + F )*/
    /* first meet at  t = floor(dp /abs(vd - vp) ) */
    return 0;
}

/* 

t == dp / (vd - vp)


 */