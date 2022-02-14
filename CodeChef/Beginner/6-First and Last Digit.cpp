#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >>t;
    while(t--) {
        int n;cin >> n;
        int sum = n % 10;
        while(n/10 > 0) n /=10;
        sum += n;
        cout << sum << endl;
    }
    return 0;
}