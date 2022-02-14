#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string s;cin >> s;
    if(s.size() == 1) {cout << 0;return 0;}
    int count = 0;
    int sum = 0;
    int ans = 1;
    for(int i = 0;i < s.size();i++) {
        count+= s[i] - '0';
    }
    while(count / 10) {
        ans++;
        sum = 0;
        while(count) {
            sum += count%10;
            count /= 10;
        }
        count = sum;
    }
    cout << ans;


    return 0;
}