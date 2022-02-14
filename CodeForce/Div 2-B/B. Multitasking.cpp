#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    set<p<int,int>> Store;
    int n,m,k = 0;    
    cin >> n >> m>> k;
    cout << (m*(m - 1)) / 2 << endl;
    for(int i = 1;i <= m;i++) {
        for(int j = i + 1;j <= m;j++) {
            if(k == 0) cout << i << ' ' << j;
            else cout << j << ' ' << i;
            cout << '\n';
        }
    }
        
    
    return 0;
}