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

    string s;int k;
    cin >> s >> k;
    string ans = "";
    int i = 0;
    while(k && i < s.size() - 1) {
        int maxIndex = i;//max index i + 1<= m <=i+k && s.size()
        for(int j = i + 1;j <= i + k && j < s.size();j++) 
            if(s[j] > s[maxIndex]) maxIndex = j;
        k -= maxIndex - i;
        ans += s[maxIndex];
        s.erase(maxIndex, 1);
    }
    cout << ans + s;
    return 0;
}