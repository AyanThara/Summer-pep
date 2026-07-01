#include <iostream>
using namespace std;
int main() {
    int arr[4][4] = {
        {6,8,10,12},
        {14,1,13,15},
        {5,11,9,3},
        {12,16,4,7}
    };
    int row = 4, col = 4;
    for(int j = 0; j < col; j++) {
        if(j % 2 == 0) {  // even column
            for(int i = 0; i < row; i++) {
                cout << arr[i][j] << " ";
            }
        }
        else {            // odd column
            for(int i = row - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}
