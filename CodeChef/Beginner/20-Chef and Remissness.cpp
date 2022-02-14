#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, a , b;
    cin >> t;
   
    while(t--) {
        cin >> a >> b;
        int min = a > b ? a : b;
        int max = a+b;
        
        cout << min << ' ' << max << '\n';
    }

    return 0;
}