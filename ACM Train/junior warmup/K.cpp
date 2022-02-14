#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0;i < n;i++) cin >> arr[i];
    bool ans = true;
    for(int i = 1 ; i < n- 1; i++)
		if(arr[i-1]>= arr[i] && arr[i] <=arr[i+1]){
			ans = false;
			break;
		}
    if(ans) cout << "YES";
    else cout <<"NO";
    return 0;
}