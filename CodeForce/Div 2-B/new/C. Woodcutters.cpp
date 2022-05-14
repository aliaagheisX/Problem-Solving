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

    int t,n;
    ll x;
    ll xp, yp, h;
    int count = 1;
    cin >> n;
/*     cin >> xp >> h;
    yp = xp;
    xp -= h; */

    vector<pair<ll,ll>> v(n); // f = x, s = h
    for(int i = 0;i < n;i++) {
        cin >> v[i].first >> v[i].second;
    }
    for(int i = 1;i < n;i++) {

        //if(x - h > yp) {count++, yp = x, xp = x - h;}
        if(v[i].first - v[i].second > v[i - 1].second) 
        {
            ll temp = v[i].first;
            v[i].first -= v[i].second;
            v[i].second = temp;
            count++;
        }
        else if(v[i].first + v[i].second > v[i - 1].second) 
        {
            ll temp = v[i].first;
            v[i].first -= v[i].second;
            v[i].second = temp;
            count++;
        }
    }
/* 
        else if() */
    

    return 0;
}