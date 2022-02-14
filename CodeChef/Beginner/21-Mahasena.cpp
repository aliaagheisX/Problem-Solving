#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, num, lucky = 0,unlucky = 0;
    cin >> t;
   
    while(t--) {
        cin >>num;
        if(num % 2 == 0) lucky ++;
        else unlucky++;
    }
    if(lucky > unlucky) cout << "READY FOR BATTLE";
    else cout <<"NOT READY";

    return 0;
}