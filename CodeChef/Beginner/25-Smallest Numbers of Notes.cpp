#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int bells(int arr[], int n, int money) {
    int count = 0;
    for(int i = 0;i < n;i++) {
        count+= (money / arr[i]);
        money -= (int((money / arr[i])) *arr[i]);
    }
    return count;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    int num;
    int Rs[6] = {100, 50, 10, 5, 2, 1};
    cin >> t;
   
    while(t--) {
        cin >> num;
        cout << bells(Rs, 6, num) <<endl;
    }

    return 0;
}