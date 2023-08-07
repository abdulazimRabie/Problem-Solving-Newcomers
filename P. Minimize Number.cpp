#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    long long* arr = new long long[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                cout << count;
                return 0;
            }
            arr[i] /= 2;
        }
        count++;
    }


    return 0;
}
