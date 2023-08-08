#include <iostream>
using namespace std;

int main() {

    int rows, cols;
    cin >> rows >> cols;

    int** arr = new int* [rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];

        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int num;
    cin >> num;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (num == arr[i][j]) {
                cout << "will not take number";
                return 0;
            }
        }
    }

    cout << "will take number";

    return 0;
}
