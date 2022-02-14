#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,x,y,k,n,p,c;
    cin >> t;
    while(t--) {
        cin >> x >> y >> k >> n;
        
        bool lucky = false;
        if(x <= y) lucky = true;
        while(n--) {
            cin >> p >> c;
            if(c <= k && p >= x - y)lucky = true;
        }
        if(lucky) cout << "LuckyChef\n";
        else cout << "UnluckyChef\n";
    }

    return 0;
}