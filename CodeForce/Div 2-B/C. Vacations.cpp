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

    int n,a;
    int count = 0;
    cin >> n;
    stack<int> st;
    for(int i = 0;i < n;i++) {
        cin >> a;
        if(a == 0) count++, st.push(0);
        else if(st.empty() || st.top() == 3 || st.top() == 0) st.push(a);
        else {
            if(a == 3) st.push((st.top() == 1) ? 2 : 1);
            else if(a == st.top()) count++, st.push(0);
            else st.push(a);
        }
    }
    cout << count;
  

    return 0;
}
/* 
100
3 2 1 2 1 2 1 [1] 3 2 2 3 2 3 3 3 3 3 3 1 2 2 3 1 3 3 2 2 2 3 1 0 3 3 3 2 3 3 1 1 3 1 3 3 3 1 3 1 3 0 1 3 2 3 2 1 1 3 2 3 3 3 2 3 1 3 3 3 3 2 2 2 1 3 1 3 3 3 3 1 3 2 3 3 0 3 3 3 3 3 1 0 2 1 3 3 0 2 3 3

 */