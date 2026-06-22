//Ternary operator
#include <iostream>
using namespace std;
int main() {
    int x, y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    (x > y) ? cout << "x is greater" : cout << "y is greater";
}
