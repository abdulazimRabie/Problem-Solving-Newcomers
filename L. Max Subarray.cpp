#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void maxSubArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int n = i+1;
        int maxNum = arr[i];
        while (n <= size) {
            for (int j = i; j < n; j++) {
                maxNum = max(maxNum, arr[j]);
            }
            cout << maxNum << " ";
            n++;
        }
    }
    cout << endl;
}

int main() {

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size; 
        int* arr = new int[size];
        for (int j = 0; j < size; j++)
            cin >> arr[j];
        maxSubArray(arr, size);
    }



    return 0;
}
