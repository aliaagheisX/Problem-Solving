#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair

int n, m;
ll maxDanger = 1;

void DFS(vector<bool> &visited, vector< vector<int> >& gp, int index, int & count) {
    if(index > n)  return;
    for(int i = 0;i < gp[index].size();i++) {
        if(!visited[gp[index][i]]) {
            visited[gp[index][i]]=true;
            count++;
            DFS(visited, gp, gp[index][i], count);
        }
    }
}

void funct(vector<bool> &visited, vector< vector<int> > &gp) {
    for(int i =1 ;i <= n;i++) {
        if(!visited[i]) {
            int count = 1;

            visited[i] = true;

            DFS(visited, gp, i ,count);
            maxDanger *= pow(2,(count ? (count - 1) : 0));
        }
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
  
    vector< vector<int> > gp(n + 1);
    vector<bool> visited(n + 1, 0);
    int x,y;
    for(int i = 0;i < m;i++) {
        cin >> x >> y;
        gp[x].push_back(y);
        gp[y].push_back(x);
    }
    funct(visited, gp);
    cout << maxDanger;
    return 0; 
}

