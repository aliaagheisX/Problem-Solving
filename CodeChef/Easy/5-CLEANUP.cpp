#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,n,m;
    cin >> t; 
    while(t--) {
        cin >> n >> m;
        int arr[m];
        for(int i = 0;i < m;i++) cin >> arr[i];
        sort(arr, arr+m);

        bool who = 1;// 1 -> c | 0 -> A

        int ptrArr = 0; // pointer to arr
        
        vector<int> chef;
        vector<int> a;

        for(int i = 1;i <=n;i++) {
            if(ptrArr < m && i == arr[ptrArr]) {ptrArr++; continue;}

            if(who) chef.push_back(i);
            else a.push_back(i);

            who = !who;
        }

        for(auto i : chef) cout << i << ' ';
        cout << '\n';
        for(auto i : a) cout << i << ' ';
        cout << '\n';

    }

    return 0;
}