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
        if(num < 10) cout << "Thanks for helping Chef!\n";
        else cout << "-1\n";
    }

    return 0;
}