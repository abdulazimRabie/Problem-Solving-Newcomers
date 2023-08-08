#include <iostream>
using namespace std;

void doubleArray(int *a, int size) {
    for (int i = 0; i < size; i++) {
        *(a+i) *= 2;
    }
}

int main() {

    int size;
    cin >> size;

    int** arr = new int* [size];

    int row = 0, col = size - 1, mainDiagonal = 0, secondaryDiagonal = 0;

    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];

        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
            if (i == j) mainDiagonal += arr[i][j];
            if (i == row && j == col) {
                secondaryDiagonal += arr[i][j];
                row++;
                col--;
            }
        }
    }

    
    cout << abs(mainDiagonal - secondaryDiagonal);

    return 0;
}
