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

    int f,n;
    cin >> n >> f;
    vector<pair<ll,ll>> a(n);
    pair<ll,ll> arr[n];
    ll count = 0;
    ll k ,l;
    for(int i = 0;i < n;i++) {
        
        cin >> arr[i].first >> arr[i].second;
        a[i] = (make_pair( min(arr[i].first * 2, arr[i].second) - min(arr[i].first, arr[i].second), i) );

    }
    sort(a.rbegin(), a.rend());

    for(auto i : a) {
        if(f > 0) {
            f--;
            count += min(arr[i.second].first * 2, arr[i.second].second);
        }
        else{count +=  min(arr[i.second].first, arr[i.second].second);}
    }
    
    cout <<count;
    return 0;
}