#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

bool isOperator(char o) {
    char operators[5] = {'+','-', '/', '*', '^'};

    for(int i = 0;i < 5;i++) if(o == operators[i]) return true;

    return false;
}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t,n;
    cin >> t;

    string s;
   
    while(t--) {
        
        cin >> s;
        stack<char> op;
        for(int i = 0;i < s.size();i++) {
            if(isOperator(s[i])) op.push(s[i]);
            else if(s[i] == ')') cout << op.top(), op.pop();
            else if(s[i] != '(') cout << s[i];
        }
        cout << '\n';
    }

    return 0;
}