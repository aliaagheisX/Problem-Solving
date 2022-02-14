#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a , b;
   

        cin >> a >> b;
        if(a > b) cout << a - b << '\n';
        else cout << a + b << '\n';

    return 0;
}