#include <iostream>
using namespace std;

int main() {

    long long num;
    cin >> num;

    if (num == 1 || num == 2) {
        cout << --num;
        return 0;
    }

    long long first = 0, second = 1, result = 0;

    for (int i = 3; i <= num; i++) {
        result = first + second;
        first = second;
        second = result;
    }

    cout << result;


    return 0;
}
