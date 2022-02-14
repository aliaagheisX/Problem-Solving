#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int x;
    float y;
    
    cin >> x >> y;
    cout << fixed << setprecision(2);
    if(x % 5 != 0 || y < float(x) + 0.5) cout << y ;
    else cout << y - float(x) - 0.5;
    return 0;
}