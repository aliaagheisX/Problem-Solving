#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define vi vector<int>
#define vpll vector<pair<ll, ll>>
#define vpii vector<pair<int, int>>
#define vpil vector<pair<int, ll>>
#define p pair
#define first X
#define second Y
#define INF INT_MAX
#define EPS 1e-9;
#define deg(x)	<< fixed<< setprecision(x)

#define fi(ii,n)	for (ll i = ii ; i < n ; i++)
#define fj(j,n)	for (ll i = ii ; i < n ; i++)

int dx[8] = { -1, -1, -1,  0, 0,  1, 1, 1 };
int dy[8] = { -1,  0,  1, -1, 1, -1, 0, 1 };
int lcm(int a,int b) {return (a*b)/__gcd(a,b);}

void solve() {
    
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, ones = 0,zeros = 0;
    cin >> n;

    vector<int> arr(n);

    fi(0,n){
        
        cin >> arr[i];
        if(arr[i] == 1) ones++;
        else zeros++;
        
    }
    int i = 0;
    ll count = 1;
    while(arr[i] != 1 && i < n) i++;
    if(i == n) {cout << 0; return 0;}
    for(int j = i;j < n;j++){
        if(arr[j] == 1){
            ones--;
            if(ones == 0) {cout << count;return 0;}
            i=1;
            while(arr[i+j] != 1 && i+j < n) i++;
            count *= i;
            j += i-1;
        }
    }
    cout << count;
    return 0;
}