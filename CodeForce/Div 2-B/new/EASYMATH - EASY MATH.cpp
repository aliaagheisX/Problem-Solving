#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair


void solve() {
    
}

ll lcm(ll a, ll b) {return (a*b) / __gcd(a,b);}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    ll n , m , a ,d;


    
     while(t--) {
        cin >> n >> m >> a >> d;
        ll ans = 0;
        ll ans1 = 0;
        ll arr[5] = {a, a+d, a+2*d, a+3*d, a+4*d};
        for(int i = 1;i < 32;i++){
            ll di= 1;
            int count = 0;
            for(int j = 0;j < 5;j++) {
                if(i & (1 << j)) di = lcm(di, arr[j]), count++;
            }
            if(count % 2 == 0)ans -= m/di, ans1 -= (n-1)/di;
            else ans += m/di, ans1 += (n-1)/di;
        }
        cout << (m - ans ) - (n- 1 - ans1) << endl;
    } 
    return 0;
}