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

    int t,n;

    cin >> n;
    pair<ll, int> arr[n];
    for(int i = 0;i < n;i++) cin >> arr[i].first, arr[i].second = i;

    sort(arr, arr + n);

    bool win = true;
    int useSegment = 1;
    int startIndex = 0;
    int endIndex = 0;

    for(int i = 0;i < n;i++) {
        if(arr[i].second != i && useSegment == 1) {
            useSegment--;
           //endIndex = arr[i].second + 1;
           endIndex = i;
        }
        else if(arr[i].second != i && useSegment == 0) {
            if(arr[i].second != arr[i-1].second - 1){win = false;break;}
            else if(arr[i].second == endIndex) startIndex = i, useSegment--;
        }
        else if(arr[i].second != i) {win = false;break;}
    }

    if(win) {
        cout << "yes\n" << arr[startIndex].second + 1 << ' ' << arr[endIndex].second + 1;
    }
    else cout << "no\n";
    return 0;
}