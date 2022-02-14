#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    string j, s;
    while(t--) {
        cin >> j >> s;
        sort(j.begin(), j.end());
        sort(s.begin(), s.end());
        int count = 0;
        for(int i = 0;i < j.size();i++) {
            for(int m = 0;s[m] <= j[i] && m < s.size();m++) {
                if(s[m] == j[i]) count++, s[m] = ' ';
            }
        }
        cout << count << '\n';

    }

    return 0;
}