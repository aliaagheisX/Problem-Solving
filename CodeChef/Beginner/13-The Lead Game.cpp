#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, a ,b, sum1 = 0, sum2 = 0,maxLead = 0, winner;
    cin >> t;
   
    while(t--) {
        cin >> a >> b;
        sum1 += a;
        sum2+= b;
        if(abs(sum1 - sum2) > maxLead) {
            maxLead = abs(sum1 - sum2);
            if(sum1 > sum2) winner = 1;
            else winner = 2;
        }
       
    }
    cout << winner << ' ' << maxLead;
    return 0;
}