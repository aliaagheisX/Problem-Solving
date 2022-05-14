#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair


void solve() {
    
}


int main() {
/*
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

     int t,n;
    cin >> t;

    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++) cin >> arr[i];
     
    while(t--) {

    }
*/
    int x,y;
    while(cin >> x >> y) {
        cout << setw(10) << x << setw(10) << y << ((__gcd(x,y) == 1) ? "     Good Choice\n" : "     Bad Choice\n");
    }
    return 0;
}