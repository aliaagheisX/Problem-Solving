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

    string s1, s2;
    cin >> s1 >> s2;
    int right = 0;
    vector<int> prop;
    for(auto i : s1) 
        if(i == '+') right++;
        else right--;

    for(auto i : s2) {
        if(prop.empty()) {
            if(i == '?') prop.push_back(1), prop.push_back(-1);
            else if(i == '+')prop.push_back(1);
            else prop.push_back(-1);
        }
        else {
            int size = prop.size();
            if(i == '?') 
                for(int k = 0;k < size;k++) 
                    prop.push_back(prop[k] - 1),prop[k]++;
            else if(i == '+')
                for(int k = 0;k < size;k++) prop[k]++;
            else 
                for(int k = 0;k < size;k++) 
                    prop[k]--;
        }
    }
    double count =0;
    for(auto k : prop)
        if(k == right) count++;
    cout << fixed << setprecision(12) << (count / (double)prop.size());
    return 0;
}