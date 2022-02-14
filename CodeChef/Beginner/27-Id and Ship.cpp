#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;char id;
    cin >> t;
   
    while(t--) {
        cin >>id;
        id = id >= 'a' && id <= 'z' ? (id - 'a') + 'A': id;
        switch (id)
        {
        case 'B':
            cout << "BattleShip\n";
            break;
        case 'C':
            cout << "Cruiser\n";
            break;  
        case 'D':
            cout << "Destroyer\n";
            break;    
        case 'F':
            cout << "Frigate\n";
            break;
        }
    }

    return 0;
}