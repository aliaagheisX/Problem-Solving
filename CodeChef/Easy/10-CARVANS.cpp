#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,n;
    ll s, max;
    cin >> t;


    while(t--) {
        cin >> n >> max;
        ll sum = 1;
        for(int i = 1;i < n;i++){ 
           cin >> s; 
           if(s <= max) sum++, max = s;
        }
        cout << sum << '\n';
    }

    return 0;
}