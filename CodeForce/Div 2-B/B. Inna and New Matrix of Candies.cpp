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

    int n,m;
    cin >> n >> m;
    
    char c;
    v<bool> arr(1015, false);
    int ans = 0;
    for(int i = 0;i < n;i++) {
        int Gpos,Spos;
        for(int j = 0;j < m;j++){
            cin >> c;
            if(c == 'G') Gpos = j;
            else if(c == 'S') Spos = j;
        }
        int maxSteps = Spos-Gpos;
        if(maxSteps <= 0) {cout << -1;return 0;}
        if(!arr[maxSteps])
            arr[maxSteps] = true,ans++;
    }
    if(ans == 0) cout << -1;
    else cout << ans;
    return 0;
}