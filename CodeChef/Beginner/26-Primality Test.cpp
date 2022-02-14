#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

bool isPrime(int num) {
    if(num == 0 || num == 1) return false;
    for(int i = 2;i <= sqrt(num);i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    int num;
    cin >> t;
   
    while(t--) {
        cin >> num;
        bool isPal = isPrime(num);
        if(isPal) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}