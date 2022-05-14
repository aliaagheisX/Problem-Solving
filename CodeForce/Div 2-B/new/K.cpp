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
    FILE * f = freopen("max-pair.in", "r", stdin);
    int t = 5,n;
    string s;

    
    cin >> t ;
    
    while(t--) {
        cin >> s;
        int i = s.size() - 1;
        for(;i >= 0;i--) if(s[i] != s[0]) break;
        cout << i<< '\n';
    }
    fclose(f);

    return 0;
}