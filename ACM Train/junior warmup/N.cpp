#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void solve() {
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;cin >> n;
    int arr[n];
    bool isDown = false;
    for(int i = 0;i < n;i++) cin >> arr[i];
 
    if(arr[n - 1] == 0) cout << "UP";
    else if(arr[n - 1] == 15) cout << "DOWN";
    else if(n == 1) cout << -1;
    else {
        if(arr[n -1] < arr[n - 2]) cout << "DOWN";
        else cout << "UP";
    }
 
   
    return 0;
}