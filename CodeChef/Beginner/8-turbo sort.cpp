#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double

/*
int part(int arr[], int l, int h) {
    for(int i = l;i <= h;i++) {
        if(arr[i] < arr[h]) {
            swap(arr[i], arr[l]);
            l++;
        }
    }
    swap(arr[h], arr[l]);
    return l;
}

void QuickSort(int arr[], int l, int h) {
    if(l < h){
        int p = part(arr, l, h);
        QuickSort(arr, l, p - 1);
        QuickSort(arr, p + 1, h);
    }
}

void insertionSort(int arr[], int n) {
    for(int i = 1;i < n;i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && key <= arr[j]) arr[j + 1] = arr[j], j--;
        arr[j + 1] = key;
    }
}
*/

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0;i < n;i++) 
        cin >> arr[i];

    sort(arr, arr + n);

    for(int i = 0;i < n;i++) cout << arr[i] << '\n';

    return 0;
}