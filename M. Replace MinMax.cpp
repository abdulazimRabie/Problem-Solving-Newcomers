#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {

    int n, minNum, minIndex = 0, maxNum, maxIndex = 0;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0) {
            minNum = arr[i];
            maxNum = arr[i];
        }
        if (minNum > arr[i]) {
            minNum = arr[i];
            minIndex = i;
        }
        if (maxNum < arr[i]) {
            maxNum = arr[i];
            maxIndex = i;
        }

    }
    swap(arr[minIndex], arr[maxIndex]);

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";




    return 0;
}
