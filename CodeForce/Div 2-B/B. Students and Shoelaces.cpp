#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair

int n,m,x,y;
bool kickOUT(vector<vector<bool>> &gp,vector<bool> &kickout){
    vector<int> kicked;
    for(int i = 1;i <= n;i++) {
        if(kickout[i]) continue;
        int count = 0;
        for(int j = 1;j <= n;j++){
            if(!kickout[j] && gp[i][j]) count++;
            else if(count > 1) {break;}
        }
        if(count == 1) kicked.push_back(i);
    }
    for(auto i : kicked) kickout[i] = true;
    return !kicked.empty();
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    vector<vector<bool>> gp(n + 1, vector<bool>(n + 1, 0));
    vector<bool> kickout(n +1, 0);
    for(int i = 0;i < m;i++){
        cin >> x>>y;
        gp[x][y] = true;
        gp[y][x] = true;
    }
    int groups = 0;
    while(kickOUT(gp, kickout)) groups++;
    cout << groups;
    return 0;
}