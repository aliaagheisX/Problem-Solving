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
	if(n == 1) {cout << "N\n";return 0;}
    deque<int> arr(n);
    for(int i = 0;i < n;i++){ cin >> arr[i];}
    
	sort(arr.begin(), arr.end());

	int min = arr[0];
	arr.pop_front();
	int mismatch = 0;
	while(!arr.empty()) {
		if(arr.front() == min) {
			arr.pop_front();
			min++;
		} else {
			mismatch++;
			min = arr.front();
			arr.pop_front();
		}
	}
	if(mismatch > 1) cout << "N\n";
	else cout << "Y\n";


    return 0;
}