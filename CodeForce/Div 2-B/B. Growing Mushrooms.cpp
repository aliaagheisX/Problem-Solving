#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

bool comp(pair<int,double> &a, pair<int,double> &b){
    if(a.second > b.second) return true;
    if(a.second == b.second && a.first < b.first) return true;

    return false;
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, t1,t2,k,a,b;
    cin >> n >> t1 >> t2 >> k;
    vector<pair<int,double>> scores(n);
    for(int i = 0;i < n;i++){
        cin >> a >> b;
        double fa = (1 - k / 100.00) * a * t1 + b * t2;
        double fb = (1 - k / 100.00) * b * t1 + a * t2;
        scores[i] = make_pair(i + 1 , max(fa, fb));
    }
    sort(scores.begin(), scores.end(), comp);

    for (auto i : scores) {
        cout << fixed << setprecision(2)<< i.first << ' ' << i.second << '\n';
    }
    return 0;
}
