#include <iostream>
#include <string>
using namespace std;


int main() {

    int n, index = -1;
    cin >> n;
    long* arr = new long[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long x;
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
            index = i;
            break;
        }
    }

    cout << index; 
    return 0;
}