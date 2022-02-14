#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double




int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,t1,t2,k, a, b;
    cin >> n >> t1 >> t2 >> k;
    vector<pair<double,int>> arr(n);
    for(int i = 0;i < n;i++) {
        cin >> a >> b;
        double max1 =(a*t1)-(double(a*t1*k)/100)+(b*t2);
        double max2 = (b*t1)-(double(b*t1*k)/100)+(a*t2);
        arr[i].first = -1*max(max1, max2);
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    for(int i = 0;i < n;i++) {
        cout << arr[i].second << ' ' << fixed << setprecision(2) <<-1*arr[i].first << '\n';
    }
    return 0;
}
