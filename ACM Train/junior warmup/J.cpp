#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m;
    cin >> n >> m;
    char s [n][m + 1];
    bool right = true;
    for(int i = 0;i < n;i++) {
        if(i % 2 == 0) {for(int j = 0;j < m;j++) s[i][j] = '#';}
        else {
            if(right) {
                for(int j = 0;j < m - 1;j++) s[i][j] = '.';
                s[i][m - 1] = '#';
                right = false;
            }
            else {
                s[i][0] = '#';
                for(int j = 1;j < m;j++) s[i][j] = '.';
                right =true;
            }
        }
        s[i][m] = '\0';
    }
    for(int i = 0;i < n;i++) {
        cout << s[i] << '\n';
    }
    return 0;
}