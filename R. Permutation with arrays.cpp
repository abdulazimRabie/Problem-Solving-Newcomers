#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long* arr1 = new long[n];
    long* arr2 = new long[n];
    long maxNum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        if (i == 0) maxNum = arr1[i];
        maxNum = max(maxNum, arr1[i]);
    }

    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        maxNum = max(maxNum, arr2[i]);
    }
    maxNum += 1;

    int* freq = new int[maxNum] {0};

    for (int i = 0; i < n; i++) {
        freq[arr1[i]]++;
    }

    for (int i = 0; i < n; i++) {
        freq[arr2[i]]--;
    }

    for (int i = 0; i < maxNum; i++)
        if (freq[i] != 0) {
            cout << "no";
            return 0;
        }

    cout << "yes";
    cout << endl;

    return 0;
}
