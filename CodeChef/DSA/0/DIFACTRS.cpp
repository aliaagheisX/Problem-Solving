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
    vector<int> factors;
    for(int i = 1;i <= n;i++){
        if(n % i == 0)
            factors.push_back(i);
    }
    cout << factors.size() << '\n';
    for(int i = 0;i < factors.size();i++)
        cout << factors[i] << ' ';
    return 0;
}