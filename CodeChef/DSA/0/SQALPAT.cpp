#include <iostream>
#include <algorithm>


using namespace std;

#define ll long long
#define ld long double

template <typename T>
void InsertionSort(T arr[], int n) {
    for(int i =1;i < n;i++) {

        T curr =arr[i];

        int j = i - 1;

        while(j >= 0 && arr[j] > curr){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
        
    }
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n = 5;
    int arr[n] = {5,4,3,2,1};

    InsertionSort(arr, n);

    for(int i= 0;i < 5;i++) cout << arr[i] << ' ';
    
    return 0;
}