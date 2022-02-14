#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define MAX (int)10e5+15

void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,a;
    cin >> n;
    vector<pair<int,int>> arr(MAX, make_pair(-1, 0));
    int t = 0;
    for(int i = 0;i < n;i++) {
        cin >> a;
        if(arr[a].first == -1) arr[a].first = i, t++;
        else if (arr[a].first ==  -2) continue;
        else if(arr[a].second == 0) arr[a].second = i - arr[a].first, arr[a].first = i;
        else {
            if(i - arr[a].first == arr[a].second) arr[a].first = i;
            else arr[a].first = -2,t--;
        }
    }
    cout << t << '\n';
    for(int i = 0;i < MAX;i++) {
        if(arr[i].first == -2 || arr[i].first == -1) continue;
        cout << i << ' ' << arr[i].second << '\n';
        

    }

    return 0;
}