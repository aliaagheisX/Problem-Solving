#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

 
    int n, k, q;
    int a,b;
    cin >> n >> k >> q;
    int num = 200005;
    vector<int> arr(num, 0);
    vector<int> arrb(num, 0);
    for(int i = 0;i < n;i++) {
        cin >> a >> b;
        arr[a]++;
        arr[b + 1]--;
    }
    for(int i = 1;i < num;i++) arr[i] += arr[i - 1];
    for(int i = 1;i < num;i++) 
        arrb[i] = bool(arr[i] >= k);
    for(int i = 1;i < num;i++) arrb[i] += arrb[i - 1];
    

    for(int i = 0;i < q;i++) {
        cin >> a >> b;
        cout << arrb[b] - arrb[a - 1]<< '\n';
    }
    

    return 0;
}