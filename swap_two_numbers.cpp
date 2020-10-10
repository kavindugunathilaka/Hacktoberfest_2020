#include <iostream>
using namespace std;
int main() {
    double a, b;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;

    // Swapping

    // a = (initial_a - initial_b)
    a = a - b;

    // b = (initial_a - initial_b) + initial_b = initial_a
    b = a + b;

    // a = initial_a - (initial_a - initial_b) = initial_b
    a = b - a;

    cout << "After swapping, a = " << a << endl;
    cout << "After swapping, b = " << b << endl;
    return 0;
}