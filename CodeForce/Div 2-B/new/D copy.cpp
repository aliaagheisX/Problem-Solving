#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair


void solve() {
    
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    ll a[n];
    ll b[n];
    ll arr[n];
    for(int i = 0;i < n;i++) {cin >> a[i];}
    for(int i = 0;i < n;i++) {cin >> b[i];}
    for(int i = 0;i < n;i++) {arr[i] = a[i] - b[i];}

    //sort(arr, arr + n);
    ll count = 0;
    for(int i = 0;i < n-1;i++) {
        for(int j = i+1;j < n;j++) {
            if(arr[i] > -1*arr[j]) {count++;}}
    }
    cout << count;

    return 0;
}

/* 

5
4 8 2 6 2
4 5 4 1 3
ai - bi > bj - aj

i < j

ai - bi > -(aj-bj)
0   
3
-2
5
-1



a > -b

0  0
2 2
1 4
3  1
5  3

2+3+1+1=7
 */