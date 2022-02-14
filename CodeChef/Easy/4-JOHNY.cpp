#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int binarySearch(ll arr[], int n, int k) {
    int s = 0, l = n - 1, mid = (s + l) / 2;
    while(s <= l) {
        if(arr[mid] > k) l = mid - 1;
        else if (arr[mid] < k) s = mid + 1;
        else return mid;
        mid = (s + l) / 2;
    }
    return -1;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,n,k;
    cin >> t;


    
    while(t--) {
        cin >> n;
        ll arr[n];
        for(int i = 0;i < n;i++) cin >> arr[i];
        cin >> k;
        k = arr[k - 1];
        sort(arr, arr+n);
        cout << binarySearch(arr, n,k) + 1 << '\n';
    }

    return 0;
}