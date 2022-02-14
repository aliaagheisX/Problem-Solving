#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int num, start;
    cin >> num >> start;

    vector<int> a(num);

    int in = start - 1;
    for(int i = 0;i < num;i++) a[i] = in++ % num + 1;

    
    int n = log2(num);
    n = 1 << n;

    int j = 1;
    for(int i = 0;i < n;) {
        if(a[j] != -1) i++;
        
        a[j] = -1;
        j += 2;
        j %= num;
    }
    for(int i = 0;i < num;i++) {
        if(a[i] != -1) {cout << a[i];break;}
    }


    return 0;
}