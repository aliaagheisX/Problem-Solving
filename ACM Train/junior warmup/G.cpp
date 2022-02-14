#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double


int isSuffix(string a,string b) {
    if(a.size() > b.size()) {
        for(int i = 0;i < b.size();i++) {
            if(b[b.size() - i - 1] != a[a.size() - i - 1]) return 0;
        }
        return 1;
    }
    else {
        for(int i = 0;i < a.size();i++) {
            if(b[b.size() - i - 1] != a[a.size() - i - 1]) return 0;
        }
        return 2;
    }
    return 0;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m;
   cin >> n;
    string name, num;
    map<string, vector<string>> arr;
    for(int i = 0;i < n;i++) {
        cin >> name >> m;
        for(int j = 0;j < m;j++) {
            cin >> num;
            bool insert = true;
            for(int k = 0;k < arr[name].size();k++) {
                int state = isSuffix(arr[name][k], num);
                if(state == 0) continue;
                if(state == 1) insert = false;
                if(state == 2) arr[name][k] = num,insert = false;
                break;
            }
            if(insert)arr[name].push_back(num);
        }
    }
    cout << arr.size() << '\n';
    for(auto i : arr){
        cout << i.first << ' ' << i.second.size() << ' ';
        for(auto j : i.second) cout << j << ' ';

        cout << '\n';
    }

    return 0;
}
