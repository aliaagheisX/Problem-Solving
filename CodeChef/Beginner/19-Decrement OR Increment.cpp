#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a;
    cin >> a;
    if(a % 4 == 0) a++;
    else a--;
    cout << a;

    return 0;
}