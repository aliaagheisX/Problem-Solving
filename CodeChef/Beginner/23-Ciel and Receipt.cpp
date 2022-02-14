#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int logging(int num) {
    int count = 0;
    while( num != 0) {
        int c = log2(num);
        c = c < 11 ? c : 11;
        num -= pow(2, c);

        count++;
    }
    return count;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    int num;
    cin >> t;
   
    while(t--) {
        cin >> num;
        cout << logging(num) <<endl;
    }

    return 0;
}