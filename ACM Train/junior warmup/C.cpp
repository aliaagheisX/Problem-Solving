#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,n,k;
    cin >> t;

    
   
    //for(int i = 0;i < n;i++) cin >> arr[i];
    
    while(t--) {
        cin >> n >> k;
        vector<pair<int,int>> arr(n);
        for(int i = 0;i < n;i++) cin >> arr[i].first;
        for(int i = 0;i < n;i++) cin >> arr[i].second;
        sort(arr.begin(),arr.end());
        int i = 0;
        int sum = k;
        while(i < n && arr[i].first <= sum){
            sum+= arr[i++].second;
        }
        cout << sum<< '\n';


    }

    return 0;
}