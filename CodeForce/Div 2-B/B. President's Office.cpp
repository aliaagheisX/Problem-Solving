#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define ld long double
  
 
int main() {
    set<char> duties;
    int n,m;char p, c;
    cin >> n >> m >> p;
    char arr[n][m];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++)
            cin >> arr[i][j];
    }
    int x[] = {1,  0, -1, 0};
    int y[] = {0, 1, 0, -1};
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++) {
            if(arr[i][j] == p) {
                for(int k = 0;k < 4;k++) {
                    if(i + x[k] < n && i + x[k] >= 0 && j + y[k] < m && j + y[k] >= 0 && arr[i + x[k]][j + y[k]] != '.' &&arr[i + x[k]][j + y[k]] != p)
                    duties.insert(arr[i+x[k]][j + y[k]]);
                }
            }
        }
    }
    cout << duties.size();
    return 0;
}