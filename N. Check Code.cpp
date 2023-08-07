#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main() {

    int a, b;
    cin >> a >> b;

    int size = a + b + 1;
    char* c = new char[size];
    cin >> c;


    if (c[a] != '-') {
        cout << "No";
        return 0;
    }

    for (int i = 0; i < size - 1; i++) {
        if (i == a) continue;
        if (!isdigit(c[i])) {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";


    return 0;
}
