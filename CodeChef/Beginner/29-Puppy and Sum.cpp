#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int sum(int D, int N) {
    if(D == 1) {
        return (N*(N+1)) / 2;
    }
    else {
        return sum(D-1,sum(1,N));
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, N, D;
    cin >> t;
   
    while(t--) {
        cin >> D>>N;
       cout << sum(D, N) << '\n';
    }

    return 0;
}