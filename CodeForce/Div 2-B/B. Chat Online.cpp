#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double





int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int p, q,l,r, a, b, c, d;
    cin >> p >> q >> l >> r;
    vector<bool> mp(10005, 0);
    vector<pair<int,int>> cd(q);

    int count = 0;
    for(int i = 0;i < p;i++) {
        cin >> a >> b;
        for(int j = a;j <=b;j++)    mp[j] = true;
    }
    for(int i = 0;i < q;i++) cin >> cd[i].first >> cd[i].second;

    for(int i = l; i <= r;i++) {
        for(int j = 0;j < q;j++) {
            bool state = false;
            for(int m = cd[j].first + i;m <= cd[j].second + i;m++) {
                if(mp[m]) {
                    count++;
                    state = true;
                    break;
                }
            }
            if(state) break;
        }
    }
    cout << count;
    return 0;
}