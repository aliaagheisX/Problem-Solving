#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int result =0, store;
    while(n--) {
        cin >> store;
        if(store % k == 0) result++;
    }
    cout << result;
    return 0;
}