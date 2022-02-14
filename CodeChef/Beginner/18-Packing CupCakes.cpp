#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, num;
    cin >> t;
   
    while(t--) {
        cin >>num;
        
        cout << int ((num + 2)/2) << '\n';
    }

    return 0;
}