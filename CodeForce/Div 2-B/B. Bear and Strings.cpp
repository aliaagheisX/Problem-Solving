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

    string s;
    cin >> s;
    int n = s.size();
    int f = s.find("bear");
    int ans = 0, i = 0;
    int prevLeft = 0;
    while(i <= s.size() && f != -1) {
        ans+= (n - f-3) * (f + 1 - prevLeft) ;
        prevLeft = f + 1;
        i = f + 1;
        f = s.find("bear", i);
    }
    cout << ans;
    return 0;
}
/* 
p bear bear h bear zq bear jkterasjhy
2*

 */