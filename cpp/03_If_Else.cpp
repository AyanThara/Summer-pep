//if else if and else
#include <iostream>
using namespace std;
int main() {
    int age, student_number;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter number of students: ";
    cin >> student_number;
    if (age > 18 && student_number > 10) {
        cout << "Take Test" << endl;
    } else {
        cout << "No" << endl;
    }
}
