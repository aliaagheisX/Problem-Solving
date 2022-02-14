#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, a, b,c;
    cin >> t;
   
    while(t--) {
        cin >> a >> b >> c;
        
        int largest = a > b ? a : b;
        int secLargest = a < b ? a : b;
        if(c >= largest) cout << largest << endl;
        else if(c >= secLargest) cout << c << endl;
        else cout << secLargest << endl;

    }

    return 0;
}