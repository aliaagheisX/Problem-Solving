#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair

int n, m, x;
char lastCharacter = -1;

vector< pair<int,int> > s;
vector<int> state('z'- 'a' + 1, -1); //-1 uninialize 1:steps++ 0:
inline bool isupper(char c) {return (c >= 'A' && c <= 'Z');}

char tolower(char c) { return isupper(c) ? c - 'A' + 'a' : c; }

float getEculdian(pair<int, int>f, pair<int,int>l) {
    return sqrt((f.first - l.first) * (f.first - l.first) + (f.second - l.second) * (f.second - l.second) );
}

float getNearestShift(vector<pair<int,int>> f) {
    float Nearest = getEculdian(s[0], f[0]);
    for(int i = 0;i < f.size();i++) {
        for(int j = 0;j < s.size();j++) {
            if(Nearest < x) return Nearest;
            if(getEculdian(s[j], f[i])  < Nearest) Nearest = getEculdian(s[j], f[i]);
        }
    }
    return Nearest;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    char c;
    cin >> n >> m >> x;
    map<char, vector<pair<int,int>>> mp;

    for(int i = 0;i < n;i++)
        for(int j = 0;j < m;j++) {
            cin >> c;
            if(c == 'S') s.push_back(make_pair(i, j));
            else mp[c].push_back( make_pair(i, j));
        }
    
    int q;
    int steps = 0;
    cin >> q;
    for(int i = 0;i < q;i++) {
        cin >> c;
        if(mp.find(tolower(c)) == mp.end()) {cout << -1;return 0;}

        if(isupper(c)) {
            if( s.empty()) {cout << -1;return 0;}
            if(state[tolower(c) - 'a'] != -1) steps+= state[tolower(c) - 'a'];
            else if (getNearestShift(mp[tolower(c)]) > x) steps++,state[tolower(c) - 'a'] = 1;
            else state[tolower(c) - 'a'] = 0;
        }
       
    }
    cout << steps;

    return 0;
}