#include <iostream>
using namespace std;

int extractSubArray(int arr[], int size, int start) {
    int sub_array_count = 0;
    int lastNum = arr[start];
    for (int i = start; i < size; i++) {
        if (lastNum > arr[i]) { 
            break; 
        }
        lastNum = arr[i];
        sub_array_count++;
    }
    return sub_array_count;
}

int countSubArray(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        count += extractSubArray(arr, size, i);
    }

    return count;
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int size; 
        cin >> size;

        int* arr = new int[size];

        for (int i = 0; i < size; i++)
            cin >> arr[i];

        cout << countSubArray(arr, size) << endl;
    }
    return 0;
}
