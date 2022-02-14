#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, a, b, c;
    cin >> t;
   
    while(t--) {
        cin >>a >> b >> c;
        
        if(a+ b +c == 180) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}