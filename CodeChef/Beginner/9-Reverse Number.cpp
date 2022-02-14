#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int ReverseNum(int num) {
    int newN = 0;
    
    while(num) {
        newN = (newN * 10) + (num % 10);
    
        num /= 10;
    }
    return newN;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, num;
    cin >> t;
   
    while(t--) {
        cin >> num;
        
        cout << ReverseNum(num) << '\n';
    }

    return 0;
}