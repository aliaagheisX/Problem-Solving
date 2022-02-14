#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


void fact(int num) {
    char arr[1000];
    int n = 1;
    arr[n-1] = '1';
    for(int t = 2;t <= num;t++) {
        int c = 0;
        for(int i = 0;i < n;i++) {
            int number = arr[i] - '0';
            number = (number * t) + c;
            c = number / 10;
            arr[i] = (number % 10) + '0';
            
        }
       while(c) {
           arr[n++]= (c % 10) + '0';
           c /= 10;
       }


    }

    for(int i = n - 1;i >= 0;i--) cout << arr[i]; 
    cout << endl;
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t, num;
    cin >> t;
    
    while(t--) {
        cin >> num;
         fact(num) ;
    }
    return 0;
}