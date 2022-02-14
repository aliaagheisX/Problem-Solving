#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define v vector
#define p pair


/* class person {
public:
    v<p<int, person *>> arr;
    void pay(person &b, int money) {
        sort(arr.rbegin(),arr.rend());
        for(auto i = arr.begin();i != arr.end();i++) {
            if(money <= 0) break;
            if(i->first < money) {
                b.arr.push_back(*i);
                money-=i->first;
                arr.erase(i);
            } 
            else if(i->first == money) {
                b.arr.push_back(*i);
                arr.erase(i);
                break;
            } else { // i.first > money
                b.arr.push_back(make_pair(money, i->second ) );
                i->first -= money;
                break;
            }
        }
        if(money) b.arr.push_back(make_pair(money, this));
    }
};
 */
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m,a,b,c;
    cin >> n >> m;
    v<int> arr(n + 1);
    while(m--) {
        cin >> a >> b >> c;
        arr[a] -= c;
        arr[b] += c;
    }
    int sum = 0;
    for(auto i : arr) if(i < 0) sum += -1*i;
    cout << sum;
    return 0;
}