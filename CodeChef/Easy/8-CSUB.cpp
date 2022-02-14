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
    cin >> t;


    
    while(t--) {
        cin >> n;

        ll sum = 0;
        string s;
        cin >> s;
        for(int i = 0;i < n;i++) sum += (s[i] - '0'); 
        sum = (sum * (sum + 1)) / 2;
        cout << sum << '\n';
    }

    return 0;
}