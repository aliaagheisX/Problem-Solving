#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

int SqaureRoot(int num) {
    
    for(int i = 0; i <= num;i++) {
        if(i * i > num) {return (i - 1);}
    }
    return num;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, num;
    cin >> t;
   
    while(t--) {
        cin >> num;
        
        cout << SqaureRoot(num) << '\n';
    }
    return 0;
}