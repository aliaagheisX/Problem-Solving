#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double




int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    if(t % 5 == 0 || t % 6 == 0) cout << "YES";
    else cout << "NO";

    return 0;
}