#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int a,b,c,d;

  ll ans = 0;
  cin >> a >> b >> c >> d;
  
  ll n = 1500005;
  vector<ll>  arr(n, 0);

  for(ll x = a;x <= b;x++) {
    arr[x + b]++;
    arr[x + c +1]--;
  }
  
  for (ll i = 1; i < n; i++)
    arr[i] += arr[i - 1];
  for (ll i = n - 1; i >= 1; i--)
    arr[i - 1] += arr[i];

  for(ll z = c;z <= d;z++)
      ans += arr[z + 1];
  cout << ans;

  return 0;
}