#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair

int x[] = { -1, -1, -1,  0, 0,  1, 1, 1 };
int y[] = { -1,  0,  1, -1, 1, -1, 0, 1 };

void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    ll a, b;
    while(t--) {
        bool win = true;
        ll z = 0;
        cin >> a>>b;
        for(int i = 0;i <= max(floor(log2(a)), floor(log2(b)) ) + 1;i++) {
            bool j = (a >> i) & 1;
            bool k = (b >> i) & 1;
            if(!j && k) {win = false;break;}

            else if(j && !k){z+= pow(2, i);}

        }
        if(win)
            cout << z << '\n';
        else cout <<"-1\n";
    }

    return 0;
}