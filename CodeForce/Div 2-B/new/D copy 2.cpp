#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int arr[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};  
  
    int t,n;
    cin >> t;

    while(t--) {
        cin >> n;
        ll count = 0;
        for(int i = 9;i >= 0;i--) {
            count += floor(n / (float)arr[i]) * i;
        }
        cout << "1 " << count << '\n';

    }

    return 0;
}