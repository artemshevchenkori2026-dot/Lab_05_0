#include <iostream>
using namespace std;

int sum(int x, int y) {
    return x + y;
}

int main() {
    int a, b;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = " << sum(a, b) << endl;

    return 0;
}