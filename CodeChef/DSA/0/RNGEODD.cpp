#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int l,r;
    cin >> l >> r;
    for(int i = l;i <= r;i++) 
        if(i % 2 != 0) cout << i << ' ';

    return 0;
}