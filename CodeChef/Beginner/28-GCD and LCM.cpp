#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;ll a ,b;
    cin >> t;
   
    while(t--) {
        cin >> a >> b;
        
        cout << __gcd(a,b) << ' ' << a*b/__gcd(a,b) << '\n';
    }
    return 0;
}