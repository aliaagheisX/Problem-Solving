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
    string s;
    set<int>count;
    for(int i = 0;i < n;i++) {
        cin >> s;
        int G = s.find('G');
        int S = s.find('S');
        if(G < S) count.insert(S-G);
        else {cout << -1 ;return 0;}
        
    }
    if(count.size() == 0) cout << -1;
    else cout << count.size();
    return 0;
}