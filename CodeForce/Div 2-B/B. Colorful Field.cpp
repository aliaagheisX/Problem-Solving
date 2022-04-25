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

    int n,m,k,t;
    cin >> n >> m >>k >> t;
    vector<pair<int,int>> wasted(k);

    for(int i = 0;i < k;i++) cin >> wasted[i].first >> wasted[i].second;
    sort(wasted.begin(), wasted.end());

    while(t--) {
        int i,j;
        cin >> i >> j;
        
        ll cells = (i - 1) * m  +  j;
        int index = 0;
        while(index < wasted.size() && (i - 1) * m  +  j > (wasted[index].first - 1) * m  +  wasted[index].second) {
            cells--;
            index++;
        }
        if(wasted[index].first == i && wasted[index].second == j) 
            cout << "Waste\n";
        else {
            string ans[3] = {"Grapes", "Carrots", "Kiwis"};
            cout << ans[(cells % 3)] << '\n';
        }
    }

    return 0;
}