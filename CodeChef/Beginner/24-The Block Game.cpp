#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

bool isPalindrome(string num) {
    for(int i = 0;i < num.length() / 2;i++) {
        if(num[i] != num[num.length() - 1- i]) return false;
    }
    return true;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    string num;
    cin >> t;
   
    while(t--) {
        cin >> num;
        bool isPal = isPalindrome(num);
        if(isPal) cout << "wins\n";
        else cout << "loses\n";
    }

    return 0;
}