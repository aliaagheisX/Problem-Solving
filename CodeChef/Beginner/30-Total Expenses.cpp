#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;float a ,b;
    cin >> t;
   
    while(t--) {
        cin >> a >> b;
        double sum = a*b;
        if(a > 1000) sum *= 0.9;
        printf("%.6f\n", sum);
    }
    return 0;
}